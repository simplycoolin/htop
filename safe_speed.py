import pandas as pd
import pytest

log=pd.read_excel("Book3.xlsx")

safe_speed=30

@pytest.mark.parametrize("row", [row for _, row in log.iterrows()])
def test_speed(row):
 speed=row['speed']
 assert speed <= safe_speed, f"unsafe speed of vehicle, speed{speed}" 
