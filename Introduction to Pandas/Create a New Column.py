import pandas as pd

def createBonusColumn(employees: pd.DataFrame) -> pd.DataFrame:
    bonus = employees.salary*2
    employees['bonus'] = bonus

    return employees 
    
