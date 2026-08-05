import pandas as pd

def rising_temperature(weather: pd.DataFrame) -> pd.DataFrame:
    weather.sort_values(by='recordDate', inplace=True)
    is_next_day = weather['recordDate'].diff().dt.days == 1
    
    is_hotter = weather['temperature'].diff() > 0
    
    return weather.loc[is_next_day & is_hotter, ['id']]