import pandas as pd

def find_customers(visits: pd.DataFrame, transactions: pd.DataFrame) -> pd.DataFrame:
    merged = pd.merge(visits, transactions, on='visit_id', how='left')
    ghosts = merged.loc[merged['transaction_id'].isna()]
    result = ghosts.groupby('customer_id', as_index=False)['visit_id'].count()
    
    return result.rename(columns={'visit_id': 'count_no_trans'})