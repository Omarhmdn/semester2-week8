


float calculate_average(Student student) {
    float sum = 0.0;
    
    // Sum up all the module marks
    for (int i = 0; i < NUM_MODULES; i++) {
        sum += student.marks[i];
    }
    
    // Return the average
    return sum / NUM_MODULES;
}