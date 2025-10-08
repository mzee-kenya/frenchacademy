#include <stdio.h>

int main() {
    int maths, science, english, kiswahili, cre, subject;


    printf("Enter your marks in the exams we did\n");

    printf("Mathematics: ");
    scanf("%d", &maths);

    printf("Science: ");
    scanf("%d", &science);

    printf("English: ");
    scanf("%d", &english);

    printf("Kiswahili: ");
    scanf("%d", &kiswahili);

    printf("C.R.E: ");
    scanf("%d", &cre);

    printf("\n--- THIS IS YOUR RESULT ---\n");

    // Mathematics grading
    if (maths >= 80) printf("MATHEMATICS: A\n");
    else if (maths >= 75) printf("MATHEMATICS: A-\n");
    else if (maths >= 70) printf("MATHEMATICS: B+\n");
    else if (maths >= 65) printf("MATHEMATICS: B\n");
    else if (maths >= 60) printf("MATHEMATICS: B-\n");
    else if (maths >= 55) printf("MATHEMATICS: C+\n");
    else if (maths >= 50) printf("MATHEMATICS: C\n");
    else if (maths >= 45) printf("MATHEMATICS: C-\n");
    else if (maths >= 40) printf("MATHEMATICS: D+\n");
    else if (maths >= 35) printf("MATHEMATICS: D\n");
    else if (maths >= 30) printf("MATHEMATICS: D-\n");
    else printf("MATHEMATICS: E\n");

    // Science grading
    if (science >= 80) printf("SCIENCE: A\n");
    else if (science >= 75) printf("SCIENCE: A-\n");
    else if (science >= 70) printf("SCIENCE: B+\n");
    else if (science >= 65) printf("SCIENCE: B\n");
    else if (science >= 60) printf("SCIENCE: B-\n");
    else if (science >= 55) printf("SCIENCE: C+\n");
    else if (science >= 50) printf("SCIENCE: C\n");
    else if (science >= 45) printf("SCIENCE: C-\n");
    else if (science >= 40) printf("SCIENCE: D+\n");
    else if (science >= 35) printf("SCIENCE: D\n");
    else if (science >= 30) printf("SCIENCE: D-\n");
    else printf("SCIENCE: E\n");

    // English grading
    if (english >= 80) printf("ENGLISH: A\n");
    else if (english >= 75) printf("ENGLISH: A-\n");
    else if (english >= 70) printf("ENGLISH: B+\n");
    else if (english >= 65) printf("ENGLISH: B\n");
    else if (english >= 60) printf("ENGLISH: B-\n");
    else if (english >= 55) printf("ENGLISH: C+\n");
    else if (english >= 50) printf("ENGLISH: C\n");
    else if (english >= 45) printf("ENGLISH: C-\n");
    else if (english >= 40) printf("ENGLISH: D+\n");
    else if (english >= 35) printf("ENGLISH: D\n");
    else if (english >= 30) printf("ENGLISH: D-\n");
    else printf("ENGLISH: E\n");

    // Kiswahili grading
    if (kiswahili >= 80) printf("KISWAHILI: A\n");
    else if (kiswahili >= 75) printf("KISWAHILI: A-\n");
    else if (kiswahili >= 70) printf("KISWAHILI: B+\n");
    else if (kiswahili >= 65) printf("KISWAHILI: B\n");
    else if (kiswahili >= 60) printf("KISWAHILI: B-\n");
    else if (kiswahili >= 55) printf("KISWAHILI: C+\n");
    else if (kiswahili >= 50) printf("KISWAHILI: C\n");
    else if (kiswahili >= 45) printf("KISWAHILI: C-\n");
    else if (kiswahili >= 40) printf("KISWAHILI: D+\n");
    else if (kiswahili >= 35) printf("KISWAHILI: D\n");
    else if (kiswahili >= 30) printf("KISWAHILI: D-\n");
    else printf("KISWAHILI: E\n");

    // CRE grading
    if (cre >= 80) printf("CRE: A\n");
    else if (cre >= 75) printf("CRE: A-\n");
    else if (cre >= 70) printf("CRE: B+\n");
    else if (cre >= 65) printf("CRE: B\n");
    else if (cre >= 60) printf("CRE: B-\n");
    else if (cre >= 55) printf("CRE: C+\n");
    else if (cre >= 50) printf("CRE: C\n");
    else if (cre >= 45) printf("CRE: C-\n");
    else if (cre >= 40) printf("CRE: D+\n");
    else if (cre >= 35) printf("CRE: D\n");
    else if (cre >= 30) printf("CRE: D-\n");
    else printf("CRE: E\n");

    subject = (maths+science+english+kiswahili+cre);
    printf("YOUR TOTAL MARKS: %d",subject);


    return 0;
}
