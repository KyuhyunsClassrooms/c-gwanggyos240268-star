#include <stdio.h>

/*
    1. [설계]에서 정의한 변수, 배열, (필요하면) 구조체를 여기에 선언하세요.

    - 이번 미니 프로젝트의 주제는 "도서 관리 프로그램"이다.
      도서의 제목, 저자, 출판년도를 저장해야 하므로 하나의 도서 정보를
      하나의 구조체로 묶어서 관리하기로 설계하였다.

    - 구조체 Book 설계:
        char title[50];   // 도서 제목
        char author[30];  // 저자 이름
        int year;         // 출판년도

    - 여러 권의 책을 저장해야 하므로 Book 구조체 배열을 사용하기로 하였고,
      최대 100권까지 저장할 수 있도록 설계하였다.

    - 현재까지 등록된 도서 수를 저장하기 위해 count 변수를 사용한다.

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

    - addBook() : 사용자로부터 도서 정보를 입력받아 배열에 저장하는 기능
    - searchBook() : 제목을 입력받아 동일한 제목의 도서를 검색하는 기능
    - listBooks() : 등록된 모든 도서 목록을 출력하는 기능

    → 실제 선언:
        void addBook();
        void searchBook();
        void listBooks();
*/

