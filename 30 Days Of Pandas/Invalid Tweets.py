import pandas as pd

def invalid_tweets(tweets: pd.DataFrame) -> pd.DataFrame:
    select = tweets[tweets['content'].str.len() > 15]
    select = pd.DataFrame(select['tweet_id'])

    return select
    
