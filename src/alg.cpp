// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
    int left = 0;
    int right = size - 1;
    int counter = 1;
    while (left <= right)
        int middle = (left + right)/2;
        if (*(arr + middle) == value) 
                int i = middle - 1;
                while (*(arr + (i)) == value) 
                    counter += 1;
                    i--;
                int j = middle + 1;
                while (*(arr + (j)) == value) 
                    counter += 1;
                    j++;     
            return counter;
        else if (*(arr + middle) < value)
            left = middle + 1;
        else
            right = middle - 1;
    return 0; 
}
