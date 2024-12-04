#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

char* read_until(char stop_char) {
    char* str = new char[1];
    int c;
    int i = 0;

    while ((c = getchar()) && c != stop_char) {
        str[i++] = (char)c;
        char* temp = new char[i + 1];
        for (int j = 0; j < i; j++) {
            temp[j] = str[j];
        }
        str = temp;
    }

    str[i] = 0;

    return str;
}


int to_number(char* str) {
    int n = 0;
    while (*str != '\0') {
        n = n * 10 + (*str - 48);
        str++;
    }
    return n;
}

void print(char* str, int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%c", str[j * i + j]);
        }
        printf("\n");
    }
}

void wczytaj_mape(char*& str, int n, int m) {
    str = new char[n * m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            str[i * m + j] = getchar();
        }
        getchar();
    }
}


void wypisz_mape(char* str, int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
        printf("%c", str[i * m + j]);
        }
        printf("\n");
    }
}


int main()
{
    char* str;
    char* mapa;
    int n, m, k, q;

    str = read_until(' ');
    n = to_number(str);
    delete[] str;
    str = read_until('\n');
    m = to_number(str);
    delete[] str;
    wczytaj_mape(mapa, n, m);
    //printf("\n\n");
    //wypisz_mape(mapa, n, m);

    str = read_until('\n');
    k = to_number(str);

    for (int i = 0; i < k; i++) {
        //wczytywanie polaczen lotniczych;
    }

    str = read_until('\n');
    q = to_number(str);

    for (int i = 0; i < q; i++) {
        char* zrodlo = read_until(' ');
        char* cel = read_until(' ');
        char* tmp = read_until('\n');
        int typ = to_number(tmp);
        
        //printf("zrodlo: %s\n", zrodlo);
        //printf("cel: %s\n", cel);
        //printf("typ: %i\n", typ);

        delete[] zrodlo;
        delete[] cel;
        delete[] tmp;
    }
}

