# include <stdio.h>

float get_hourly_rate(int vehicle_type);
float calculate_total_fee(int vehicle_type, float parking_hours);
void print_ticket(int vehicle_type, float parking_hours, float total);

int main(void) {
    int vehicle_type;
    float parking_hours;
    float total_fee;

    printf("---- PARKING FEE CALCULATOR ----\n");
    printf("1 - Motorcycle\n");
    printf("2 - Sedan / Hatchback\n");
    printf("3 - SUV / Minivan\n");
    printf("Select a vehicle type (1-3) > ");
    scanf("%d", &vehicle_type);

    printf("Enter parking duration in hours (e.g 3.5 h) > ");
    scanf("%f", &parking_hours);

    total_fee = calculate_total_fee(vehicle_type, parking_hours);
    print_ticket(vehicle_type, parking_hours, total_fee);

    return 0;
}

float get_hourly_rate(int vehicle_type) {
    if (vehicle_type == 1) {
        return 20.00f;
    } else if (vehicle_type == 2) {
        return 40.00f;
    } else if (vehicle_type == 3) {
        return 60.00f;
    } else {
        return 60.00f; // default value for invalid input
    }
}

float calculate_total_fee(int vehicle_type, float parking_hours) {
    float rate = get_hourly_rate(vehicle_type);
    float base_fee = rate * parking_hours;
    
    if (parking_hours > 5.00f) {
        return base_fee * 0.80f;
    }

    return base_fee;
}

void print_ticket(int vehicle_type, float parking_hours, float total) {
    printf("\n-------------- RECEIPT --------------\n");

    printf("Vehicle Type: ");
    if (vehicle_type == 1) {
        printf("Motorcycle\n");
    } else if (vehicle_type == 2) {
        printf("Sedan / Hatchback\n");
    } else if (vehicle_type == 3) {
        printf("SUV / Minivan\n");
    } else {
        printf("Standard\n");
    }

    printf("Parking Duration  : %.1f hours\n", parking_hours);
    printf("Total Amount      : %.2f TL\n", total);
    printf("-------------------------------------\n");
}