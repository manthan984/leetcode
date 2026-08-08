import pandas as pd

def find_managers(employee: pd.DataFrame) -> pd.DataFrame:
    manager_counts = employee['managerId'].value_counts()
    valid_managers = manager_counts[manager_counts >= 5].index
    return employee.loc[employee['id'].isin(valid_managers), ['name']]