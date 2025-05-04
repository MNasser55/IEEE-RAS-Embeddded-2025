#include <stdio.h>

typedef union  {
    int temp;
    float pressure;
    char status;
}SensorValue;

typedef struct  {
    int sensorID;
    char sensorType[20]; // e.g., "Temperature", "Pressure", "Displacement"
    SensorValue data;
}SensorData;

#include <stdio.h>
#include <string.h>

void printSensorData( SensorData sensor) {
    printf("Sensor ID: %d\n", sensor.sensorID);
    printf("Sensor Type: %s\n", sensor.sensorType);

    if (strcmp(sensor.sensorType, "Temperature") == 0) {
        printf("Temperature: %d °C\n", sensor.data.temp);
    } else if (strcmp(sensor.sensorType, "Pressure") == 0) {
        printf("Pressure: %.2f Pa\n", sensor.data.pressure);
    } else if (strcmp(sensor.sensorType, "Displacement") == 0) {
        printf("Status: %c\n", sensor.data.status);
    } else {
        printf("Unknown sensor type.\n");
    }

    printf("--------------------------\n");
}

    int main() {
     SensorData tempSensor = {1, "Temperature", .data.temp = 25};
     SensorData pressureSensor = {2, "Pressure", .data.pressure = 1013.25f};
     SensorData statusSensor = {3, "Displacement", .data.status = 'A'};

    printSensorData(tempSensor);
    printSensorData(pressureSensor);
    printSensorData(statusSensor);

    return 0;
}



