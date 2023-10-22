import pandas as pd

def selectData(students: pd.DataFrame) -> pd.DataFrame:
    df = pd.DataFrame({'name': students[students['student_id'] == 101]['name'], 'age': students[students['student_id'] == 101]['age']})
    
    return df
