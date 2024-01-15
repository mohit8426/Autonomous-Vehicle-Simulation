% ReadVehicleData.m

data = readtable('vehicleData.txt', 'Delimiter', ',', 'ReadVariableNames', false);
x = data.Var1;
y = data.Var2;

plot(x, y, 'b-o');
title('Vehicle Path');
xlabel('X Position');
ylabel('Y Position');
grid on;
