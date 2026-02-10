import pandas as pd
import pytest

log=pd.read_excel("Book3.xlsx")

SAFE_SPEED = 20
SAFE_DISTANCE=10

@pytest.mark.parametrize("row", [row for _, row in log.iterrows()])
def test_distance(row):
 speed=row['speed']
 distance=row['distance_to_object']
 assert speed <= SAFE_SPEED and distance >= SAFE_DISTANCE, \
 f"Collision warning! speed: {speed}, distance: {distance}"
