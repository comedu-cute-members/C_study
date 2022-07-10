#include <stdio.h>
#include <math.h>

int main() {
    int testcase;
    double results[100];
    
    scanf("%d", &testcase);
    
    for (int i = 0; i < testcase; i++) {
        int students, good_students = 0, sum = 0, scores[1000];
        double average = 0, result;
        
        scanf("%d", &students);
        
        for (int i = 0; i < students; i++) {
            scanf("%d", &scores[i]);
        }
        
        for (int i = 0; i < students; i++) {
            sum += scores[i];
        }
        
        average = (double)sum / students;
        
        for (int i = 0; i < students; i++) {
            if (scores[i] > average) {
                good_students++;
            }
        }
        
        result = (double)good_students / students * 100;
        result = round(result * 1000) / 1000;
        
        results[i] = result;
    }
    
    for (int i = 0; i < testcase; i++) {
        printf("%0.3lf%%\n", results[i]);
    }
    
    return 0;
}
