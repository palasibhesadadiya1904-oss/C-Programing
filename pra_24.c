#include <stdio.h>
void main()
{
    char note1[200],note2[200],copy[200],original[200],temp;
    int choice, i, j, len, flag;
    printf("Enter your note:");
    fgets(note1, sizeof(note1), stdin);
    for (i = 0; note1[i] != '\0'; i++)
    {
        if (note1[i] == '\n')
        {
            note1[i] = '\0';
            break;
        }
    }
    for (i = 0; note1[i] != '\0'; i++)
    {
        original[i] = note1[i];
    }
    original[i] = '\0';
    do {
        printf("\n1.Calculate Length\n");
        printf("2.Reverse Note\n");
        printf("3.Compare Two Notes\n");
        printf("4.Copy Note\n");
        printf("5.Concatenate Notes\n");
        printf("6.Convert to Upper Case\n");
        printf("7.Convert to Lower Case\n");
        printf("8.Capitalize Each Word\n");
        printf("9.Exit\n");
        printf("Enter your choice:");
        scanf("%d",&choice);
        getchar();
        if (choice == 1)
        {
            len = 0;
            while (note1[len] != '\0')
            {
                len++;
            }
            printf("Length of note: %d\n", len);
        }
        else if (choice == 2)
        {
            len = 0;
            while (note1[len] != '\0') len++;
            for (i = 0; i < len / 2; i++)
            {
                temp = note1[i];
                note1[i] = note1[len - i - 1];
                note1[len - i - 1] = temp;
            }
            printf("Reversed Note: %s\n", note1);
            for (i = 0; original[i] != '\0'; i++)
            {
                note1[i] = original[i];
            }
            note1[i] = '\0';
        }
        else if (choice == 3)
        {
            printf("Enter another note to compare: ");
            fgets(note2, sizeof(note2), stdin);
            for (i = 0; note2[i] != '\0'; i++)
            {
                if (note2[i] == '\n')
                {
                    note2[i] = '\0';
                    break;
                }
            }
            flag = 1;
            for (i = 0; note1[i] != '\0' || note2[i] != '\0'; i++)
            {
                if (note1[i] != note2[i])
                {
                    flag = 0;
                    break;
                }
            }
            if (flag == 1)
                printf("Notes are SAME.\n");
            else
                printf("Notes are DIFFERENT.\n");
        }
        else if (choice == 4)
        {
            for (i = 0; note1[i] != '\0'; i++)
            {
                copy[i] = note1[i];
            }
            copy[i] = '\0';
            printf("Copied Note: %s\n", copy);
        }
        else if (choice == 5)
        {
            printf("Enter note to concatenate: ");
            fgets(note2, sizeof(note2), stdin);
            for (i = 0; note2[i] != '\0'; i++)
            {
                if (note2[i] == '\n')
                {
                    note2[i] = '\0';
                    break;
                }
            }
            i = 0;
            while (note1[i] != '\0') i++;
            j = 0;
            while (note2[j] != '\0')
            {
                note1[i] = note2[j];
                i++;
                j++;
            }
            note1[i] = '\0';
            printf("After Concatenation: %s\n", note1);
        }
        else if (choice == 6)
        {
            for (i = 0; note1[i] != '\0'; i++) {
                if (note1[i] >= 'a' && note1[i] <= 'z')
                {
                    note1[i] = note1[i] - 32;
                }
            }
            printf("Upper Case Note: %s\n", note1);
        }
        else if (choice == 7)
        {
            for (i = 0; note1[i] != '\0'; i++) {
                if (note1[i] >= 'A' && note1[i] <= 'Z')
                {
                    note1[i] = note1[i] + 32;
                }
            }
            printf("Lower Case Note: %s\n", note1);
        }
        else if (choice == 8)
        {
            flag = 1;
            for (i = 0; note1[i] != '\0'; i++)
            {
                if (note1[i] == ' ')
                {
                    flag = 1;
                }
                else if (flag == 1 && note1[i] >= 'a' && note1[i] <= 'z')
                {
                    note1[i] = note1[i] - 32;
                    flag = 0;
                }
                else
                {
                    flag = 0;
                }
            }
            printf("Capitalized Note: %s\n", note1);
        }
        else if (choice == 9)
        {
            printf("Exiting program. Goodbye!\n");
        }
        else
        {
            printf("Invalid choice. Please try again.\n");
        }

    } while (choice != 9);
    printf("25CE008");
}
