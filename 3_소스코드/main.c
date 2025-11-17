#include <stdio.h>

/*
    1. [설계]에서 정의한 변수, 배열, (필요하면) 구조체를 여기에 선언하세요.
    - 구조체 Book 설계:
        char title[50];   
        char author[30];  
        int year;         


    → 실제 선언:
        struct Book {
            char title[50];
            char author[30];
            int year;
        };

        struct Book library[100];
        int count = 0;
}
*/


/*
    2. [알고리즘]에서 설계한 핵심 기능 함수들을 여기에 선언하세요.

   #include <stdio.h>
#include <string.h>

#define MAX_BOOKS 100

typedef struct {
    char title[50];
    char author[30];
    int year;
} Book;

Book library[MAX_BOOKS];
int count = 0;

void addBook();
void searchBook();
void listBooks();

int main() {
    printf("--- C언어 미니 프로젝트: 도서 관리 프로그램 ---\n");

    int menu;

    while (1) {
        printf("\n===== 메뉴 =====\n");
        printf("1. 도서 등록\n");
        printf("2. 도서 검색\n");
        printf("3. 도서 목록 보기\n");
        printf("4. 종료\n");
        printf("메뉴 선택: ");
        scanf("%d", &menu);
        getchar();
        
        if (menu == 1) {
            addBook();
        }
        else if (menu == 2) {
            searchBook();
        }
        else if (menu == 3) {
            listBooks();
        }
        else if (menu == 4) {
            printf("프로그램을 종료합니다.\n");
            break;
        }
        else {
            printf("잘못된 입력입니다. 다시 입력하세요.\n");
        }
    }

    return 0;
}

void addBook() {
    printf("[addBook 함수 호출됨]\n");
}

void searchBook() {
    printf("[searchBook 함수 호출됨]\n");
}

void listBooks() {
    printf("[listBooks 함수 호출됨]\n");
}
