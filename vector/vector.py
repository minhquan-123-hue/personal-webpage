# vận tốc viên đạn
bullet_velX = 5
print("viên đạn trục X đang đi: ",bullet_velX)
bullet_velY = 0
print("viên đạn trục Y đang đi: ",bullet_velY)
# gió thổi
wind_velX = -2
print("gió thổi trục X: ",wind_velX)
wind_velY = 3
print("gió thổi trục Y: ",wind_velY)

# viên đạn bị lệch hướng do gió
bullet_affectedX = bullet_velX + wind_velX
print("viên đạn trục X sau khi bị gió thổi: ",bullet_affectedX)
bullet_affectedY = bullet_velY + wind_velY
print("viên đạn trục Y sau khi bị gió thổi: ",bullet_affectedY)
