import pandas as pd

def selectFirstRows(employees: pd.DataFrame) -> pd.DataFrame:
    h = employees[:3]
    return h
    
