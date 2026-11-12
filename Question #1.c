#include <stdio.h>
#include <string.h>

int main() {
    char feedback[500];
    char updated[1000] = "";

    printf("Enter customer feedback: ");
    fgets(feedback, sizeof(feedback), stdin);

    feedback[strcspn(feedback, "\n")] = '\0';

    size_t length = strlen(feedback);
    printf("\nTotal characters: %zu\n", length);

    if (strstr(feedback, "good") != NULL) {
        printf("Keyword found: \"good\"\n");
    }
    if (strstr(feedback, "bad") != NULL) {
        printf("Keyword found: \"bad\"\n");
    }

    char *current_pos = feedback;
    char *match_pos;
    char temp[500];

    while ((match_pos = strstr(current_pos, "bad")) != NULL) {
        size_t prefix_len = match_pos - current_pos;


        strncpy(temp, current_pos, prefix_len);
        temp[prefix_len] = '\0';
        strcat(updated, temp);

        strcat(updated, "not good");


        current_pos = match_pos + strlen("bad");
    }

    strcat(updated, current_pos);

    printf("Updated review: %s\n", updated);

    return 0;
}