
import pandas as pd
log = pd.read_excel("Book3.xlsx")
safe_distance = 5
safe_speed =  25

log['collision_risk'] = (log['speed'] > 25) & (log['distance_to_object'] > 5)
print("collision risk")
print(log)
