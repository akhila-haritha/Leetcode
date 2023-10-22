import pandas as pd

def findHeavyAnimals(animals: pd.DataFrame) -> pd.DataFrame:

    ni = animals[animals['weight'] > 100]
    ni.sort_values(by='weight', ascending=False, inplace=True)
    h = ni['name'].tolist()
    h = pd.DataFrame(h,columns=['name'])
    return h
