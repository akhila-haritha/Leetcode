import pandas as pd

def big_countries(world: pd.DataFrame) -> pd.DataFrame:
    p = world.drop(['continent','gdp'],axis="columns")
    p = p[(p['area']>=3000000) | (p['population']>=25000000)]
    return p    
