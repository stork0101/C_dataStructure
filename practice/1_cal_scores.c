#define MAX_ELEMENTS 100
int scores[MAX_ELEMENTS];   //자료구조

int get_max_score(int n){   //학생의 숫자는 n
    int i, largest;
    largest = scores[0];    //알고리즘
    for (i=1; i<n; i++){
        if(scores[i]>largest){
            largest = scores[i];
        }
    }
    return largest;
}

/* 배열에서 최대값을 찾는 알고리즘을 의사 코드로 표현한 예
ArrayMax(list, N):
    largest<-list[0]
    for i<-1 to N-1 do
        if list[i]>largest
        thne largest<-list[i]
    return largest
*/

/*
객체: 0에서 시작하여 INT_MAX까지의 순서화도니 정수의 부분범위
함수: Nat_Number zero()     ::= 0
Nat_Number successor(x)     ::= if(x==INT_MAX) return x
                                else return x+1
Boolean is_zero(x)          ::= if(x) return FALSE
                                else return TRUE
Boolean equal(x,y)          ::= if(x==y) return TRUE
                                else return FALSE
Nat_Number add(x,y)         ::= if((x+y)<=INT_MAX)
                            return x+y
                            else return INT_MAX
Nat_Number sub(x,y)         ::= if(x<y) return 0
                            else return x-y;
*/