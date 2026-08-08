import pandas as pd

def get_average_time(activity: pd.DataFrame) -> pd.DataFrame:
    pivot_df = activity.pivot(
        index=['machine_id', 'process_id'], 
        columns='activity_type', 
        values='timestamp'
    )
    
    pivot_df['processing_time'] = pivot_df['end'] - pivot_df['start']
    
    result = pivot_df.groupby('machine_id')['processing_time'].mean().reset_index()
    
    result['processing_time'] = result['processing_time'].round(3)
    
    return result