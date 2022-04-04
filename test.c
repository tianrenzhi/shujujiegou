#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdbool.h>


                                                   //栈
//
//#define Maxsize 4
//typedef struct {
//	int data[Maxsize];
//	int top;
//}SqStack;
//
//void InitStack(SqStack *L) {
//	(*L).top = -1;
//}
//
//bool StackEmpty(SqStack *L) {
//	if ((*L).top == -1)
//		return true;
//	else
//		return false;
//}
//
//void Push(SqStack *L, int n) {
//	if ((*L).top == Maxsize - 1) {
//		printf("栈满\n");
//		return;
//	}
//	(*L).data[++(*L).top] = n;
//}
//
//void Pop(SqStack *L) {
//	if ((*L).top == -1) {
//		printf("栈空\n");
//		return;
//	}
//	int n = 0;
//	n = (*L).data[(*L).top--];
//	printf("%d   ", n);
//}
//
//void GetTop(SqStack *L) {
//	if ((*L).top == -1) {
//		printf("栈空\n");
//		return;
//	}
//	int n = 0;
//	n = (*L).data[(*L).top];
//	printf("栈顶元素为%d\n", n);
//}
//
//int main() {
//	int arr[4] = { 1,2,3,4, };
//	SqStack L;
//	InitStack(&L);
//	bool ret = StackEmpty(&L);
//	if (ret == 1)
//		printf("栈为空\n");
//	else
//		printf("栈不空\n");
//	for (int i = 0; i < 4; i++) {
//		Push(&L, arr[i]);
//	}
//	/*Push(&L,3);
//	Push(&L, 4);
//	Push(&L, 5);
//	Push(&L, 6);
//	Push(&L, 7);
//	Push(&L, 8);*/
//	GetTop(&L);
//
//	Pop(&L);
//	Pop(&L);
//	Pop(&L);
//	Pop(&L);
//	Pop(&L);
//	GetTop(&L);
//
//	return 0;
//}




//void Judge(char* arr) {
//	int i = 0;
//	int k = 0, j = 0;
//	while (arr[i] != 0) {
//		switch (arr[i]) {
//		case 'I':j++; break;
//		case 'O':k++;
//			if (k > j) {
//				printf("序列非法\n");
//				return;
//			}
//		}
//		i++;
//	}
//	if (j != k) {
//		printf("序列非法\n");
//		return;
//	}
//	else {
//		printf("序列合法\n");
//		return;
//	}
//}
//
//
//int main() {
//	char arr[] = { 'I','O','I','O','I'};
//	int n = sizeof(arr);
//	//Judge(arr);
//	dc(arr,n);
//	return 0;
//}



////双栈共顶
//#include<stdbool.h>
//#define Maxsize 10
//typedef struct {
//    int data[Maxsize];
//    int top[2];
//}stk;
//stk s;
//
//
//void Initstack(stk* s) {
//    s->top[0] = -1;
//    s->top[1] = Maxsize;
//}
//
//bool Stackfull(stk* s) {
//    if (s->top[0] + 1 == s->top[1])
//        return true;
//    else
//        return false;
//}
//
//bool Stackempty(stk* s, int n) {
//    if (n == 0) {
//        if (s->top[n] == -1)
//            return true;
//        else
//            return false;
//    }
//    else if (n == 1) {
//        if (s->top[1] == Maxsize)
//            return true;
//        else
//            return false;
//    }
//    
//}
//
//
//void Pushstack(int num, int n) {
//    if (Stackfull(&s)) {
//        printf("双向栈满，入栈失败\n");
//        return;
//    }
//    else if(num == 0)
//    {
//        s.data[++s.top[0]] = n;
//    }
//    else if (num == 1) {
//        s.data[--s.top[1]] = n;
//    }
//}
//
//
//void Popstack(int num) {
//    if (Stackempty(&s, num)) {
//        printf("第%d栈已空\n",num);
//        return;
//    }
//    int n = 0;
//    switch (num) {
//    case 0:
//        n = s.data[s.top[0]--];
//        break;
//    case 1:
//        n = s.data[s.top[1]++];
//        break;
//    }
//    printf("第%d栈顶元素为%d\n", num, n);
//}
//
//int main() {
//    Initstack(&s);
//    bool ret = Stackfull(&s);
//    if (ret == true) printf("双向栈满了\n");
//    else printf("双向栈未满\n");
//    Pushstack(0,3);
//    Pushstack(0, 4);
//    Pushstack(0, 5);
//    Pushstack(0, 6);
//    Pushstack(1, 5);
//    Pushstack(1, 4);
//    Pushstack(1, 3);
//
//    Popstack(0);
//    Popstack(1);
//
//    return 0;
//}



////        比较是否对称
//
//#define Maxsize 100
//typedef struct {
//	int data[Maxsize];
//	int top;
//}SqStack;
//
//void InitStack(SqStack *L) {
//	(*L).top = -1;
//}
//
//bool StackEmpty(SqStack *L) {
//	if ((*L).top == -1)
//		return true;
//	else
//		return false;
//}
//
//void Push(SqStack *L, int n) {
//	if ((*L).top == Maxsize - 1) {
//		printf("栈满\n");
//		return;
//	}
//	/*for (int i = 0; i < 5; i++) {
//		printf("%p\n", L->data[i]);
//	}*/
//	(*L).data[++(*L).top] = n;
//}
//
//
//int Pop(SqStack* L) {
//	if ((*L).top == -1) {
//		printf("栈空\n");
//		return NULL;
//	}
//	int n = 0;
//	n = (*L).data[(*L).top--];
//	return n;
//}
//
//void symmetry(int* arr,SqStack *L,int sz) {
//	int i = 0;
//	for ( i = 0; i < sz / 2; i++) {
//		Push(L, arr[i]);
//	}
//	int num = Pop(L);
//	while (sz % 2 && L->top > -1 && num !=NULL) {
//		if (num == arr[i + 1]) {
//			num = Pop(L);
//			i += 1;
//		}
//		else
//			break;
//	}
//
//	while (sz % 2 == 0 && L->top > -1 && num != NULL) {
//		if (num == arr[i]) {
//			num = Pop(L);
//			i += 1;
//		}
//		else
//			break;
//	}
//	if (L->top == -1) {
//		printf("对称\n");
//	}
//	else
//		printf("不对称\n");
//}
//
//
//int main() {
//    int arr[] = { 1,2,2,3,3,4,3,3,2,2,1,3 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	SqStack L;
//	InitStack(&L);
//    symmetry(arr,&L,sz);
//
//
//
//    return 0;
//}














//                      队列

//
//#define Maxsize 5
//#include<stdbool.h>
//typedef struct {
//	int data[Maxsize];
//	int front, rear;
//}SqQueue;
//
//void InitQueue(SqQueue* Q) {
//	(*Q).front = (*Q).rear = 0;
//}
//
//bool QueueEmpty(SqQueue *Q){
//	if (Q->rear == Q->front) {
//		return true;
//	}
//	else {
//		return false;
//	}
//}
//
//void EnQueue(SqQueue* Q,int n) {
//	if (((*Q).rear + 1) % Maxsize == (*Q).front) {
//		printf("队列满\n");
//		return;
//	}
//	(*Q).data[(*Q).rear] = n;
//	(*Q).rear++;
//
//}
//
//void DeQueue(SqQueue* L) {
//	int n = 0;
//	if (QueueEmpty(L)) {
//		printf("出队失败.\n");
//		return;
//	}
//	else {
//		n = L->data[L->front++];
//		printf("队头元素为 %d    \n", n);
//	}
//}
//
//void GetHead(SqQueue* L) {
//	int n = 0;
//	if (QueueEmpty(L)) {
//		printf("出队失败.\n");
//		return;
//	}
//	else {
//		n = L->data[L->front];
//		printf("队头元素是%d  \n",n);
//	}
//}
//
//int main() {
//	SqQueue Q;
//	InitQueue(&Q);
//	bool ret = QueueEmpty(&Q);
//	if (ret == true) printf("队列为空\n");
//	else printf("队列不为空\n");
//	EnQueue(&Q, 2);
//	EnQueue(&Q, 3);
//	EnQueue(&Q, 4);
//	EnQueue(&Q, 5);
//	DeQueue(&Q);
//	DeQueue(&Q);
//	GetHead(&Q);
//
//	return 0;
//}




//#define Maxsize 5
//typedef struct {
//    int data[Maxsize];
//    int front, rear, tag;
//}Queue;
//
//void Initqueue(Queue* Q) {
//    Q->front = Q->rear = Q->tag = 0;
//}
//
//
//
//void Enqueue(Queue *Q,int n) {
//    if (Q->tag == 1 && Q->front == Q->rear) {
//        printf("队列已满.\n");
//        return;
//    }
//    else {
//        Q->data[Q->rear] = n;
//        Q->rear = (Q->rear + 1) % Maxsize;
//        Q->tag = 1;
//    }
//}
//
//void Dequeue(Queue *Q) {
//    int  n = 0;
//    if (Q->tag == 0 && Q->rear == Q->front) {
//        printf("栈空\n");
//        return;
//    }
//    else {
//        Q->tag = 0;
//        n = Q->data[Q->front];
//        Q->front = (Q->front + 1) % Maxsize;
//    }
//}
//
//int main() {
//    Queue Q;
//    Initqueue(&Q);
//    Enqueue(&Q,3);
//    Enqueue(&Q, 4);
//    Enqueue(&Q, 5);
//    Enqueue(&Q, 6);
//    Dequeue(&Q);
//    return 0;
//}




//
//#define Maxsize 4
//typedef struct {
//	int data[Maxsize];
//	int top;
//}SqStack;
//
//void InitStack(SqStack *L) {
//	(*L).top = -1;
//}
//
//bool StackEmpty(SqStack *L) {
//	if ((*L).top == -1)
//		return true;
//	else
//		return false;
//}
//
//bool Stackfull(SqStack *L) {
//	if (L->top == Maxsize - 1) {
//		return true;
//	}
//	else return false;
//}
//
//
//void Push(SqStack *L, int n) {
//	if (Stackfull(L)) {
//		printf("栈满\n");
//		return;
//	}
//	(*L).data[++(*L).top] = n;
//}
//
//void Pop(SqStack *L) {
//	if (StackEmpty(L)) {
//		printf("栈空\n");
//		return;
//	}
//	int n = 0;
//	n = (*L).data[(*L).top--];
//	printf("%d   ", n);
//}
//
//void Enqueue(SqStack* s1, SqStack* s2,int n) {
//	if (!Stackfull(s1)) {
//		Push(s1, n);
//	}
//}
//
//void Dequeue(SqStack* s1, SqStack* s2) {
//	while (s1->top != -1) {
//		s2->data[++s2->top] = s1->data[s1->top--];
//	}
//	Pop(s2);
//	while (s2->top != -1) {
//		s1->data[++s1->top] = s2->data[s2->top--];
//	}
//}
//
//
//
//int main() {
//	SqStack s1, s2;
//	InitStack(&s1);
//	InitStack(&s2);
//	Enqueue(&s1, &s2, 3);
//	Enqueue(&s1, &s2, 4);
//	Enqueue(&s1, &s2, 5);
//	Enqueue(&s1, &s2, 6);
//
//	Dequeue(&s1, &s2);
//	return 0;
//}


//
//#define Maxsize 10
//typedef struct {
//    char arr[Maxsize];
//    int top;
//}Stack;
//
//
//void Initstack(Stack* s) {
//    s->top = -1;
//}
//
//void Push(Stack* s,char n) {
//    if (s->top == Maxsize - 1) {
//        printf("Push:栈满了\n");
//        return;
//    }
//    s->arr[++s->top] = n;
//}
//
//
//char Pop(Stack* s) {
//    if (s->top == -1) {
//        printf("Pop:栈空\n");
//        return NULL;
//    }
//    return s->arr[s->top--];
//}
//
//
//int main() {
//    Stack s;
//    Initstack(&s);
//    char data[] = { '[','[',']' ,')','\0'};
//    int i = 0;
//    while (data[i] != '\0') {
//        switch (data[i]) {
//        case '(':
//            Push(&s, '(');
//            break;
//        case '[':
//            Push(&s, '[');
//            break;
//        case '{':
//            Push(&s, '{');
//            break;
//        case ')':
//            if (data[i] != '(') {
//                printf("不匹配\n");
//                return 0;
//            }
//            break;
//        case ']':
//            if (data[i] != '[') {
//                printf("不匹配\n");
//                return 0;
//            }
//            break;
//        case '}':
//            if (data[i] != '{') {
//                printf("不匹配\n");
//                return 0;
//            }
//            break;
//        }
//        i++;
//    }
//    /*if (data[0] == ']' || data[0] == '}' || data[0] == ')' || data[0] == '\0') {
//        printf("不匹配\n");
//    }
//    else {
//        while (data[i]) {
//            if (data[i] == '(' || data[i] == '{' || data[i] == '[') {
//                Push(&s, data[i]);
//                i = i + 1;
//            }
//            else if (data[i] == ')' || data[i] == '}' || data[i] == ']') {
//                char ret = Pop(&s);
//                if((data[i] == ')' && ret == '(')
//                    || (data[i] == ']' && ret == '[')
//                    || (data[i] == '}' && ret == '{')) {
//                    i = i + 1;
//                }
//                else {
//                    printf("不配对\n");
//                        return 0;
//                }
//            }
//        }
//    }*/
//    if (s.top == -1 ) {
//        printf("匹配\n");
//    }
//    else
//        printf("不匹配\n");
//    return 0;
//}

//
//void Train_Arrange(char* train) {
//    char* p = train, *q = train;
//    while(*p) {
//        if (*p == 'H') {
//            Push(&s, 'H');
//        }
//        else {
//            *(q++) = *p;
//        }
//        p++;
//    }
//}


//#define Maxsize 10
//double p(int num) {
//    struct stack{
//        int n;
//        double val;
//    }s[Maxsize];
//    int top = -1, i = 0;
//    double fv1 = 1, fv2 = 2;
//    for (i = num; i >= 2; i--) {
//        s[++top].n = i;
//    }
//    while (top > -1) {
//        s[top].val = 2 * fv2 - 2 * (s[top].n - 1) * fv1;
//        fv1 = fv2;
//        fv2 = s[top].val;
//        top--;
//    }
//    return fv2;
//}
//
//int main() {
//    double ret = p(4);
//    printf("%f\n", ret);
//    return 0;
//}





////渡河问题
//#define Maxsize 10
//typedef struct {
//	int data[Maxsize];
//	int top;
//}Stack;
//
//void InitStack(Stack *L) {
//	(*L).top = -1;
//}
//
//bool Stackempty(Stack *L) {
//	if ((*L).top == -1)
//		return true;
//	else
//		return false;
//}
//
//void Push(Stack *L, int n) {
//	if ((*L).top == Maxsize - 1) {
//		printf("栈满\n");
//		return;
//	}
//	(*L).data[++(*L).top] = n;
//}
//
//int Pop(Stack *L) {
//	if ((*L).top == -1) {
//		printf("栈空\n");
//		return;
//	}
//	return (*L).data[(*L).top--];
//}
//
//
//void transport() {
//    int i = 0, j = 0;
//    Stack s1, s2, S;
//    InitStack(&s1);
//    InitStack(&s2);
//    InitStack(&S);
//    for (int k = 0; k < 8; k++) {
//        Push(&s1, 1);
//    }
//    for (int k = 0; k < 6; k++) {
//        Push(&s2, 0);
//    }
//    int x = 0;
//    while (j < 10) {
//        if (i < 4 && !Stackempty(&s1)) {
//            x = Pop(&s1);
//            Push(&S, x);
//            i++;
//        }
//        else if (!Stackempty(&s2)) {
//            x = Pop(&s2);
//            Push(&S, x);
//            i = 0;
//        }
//        else {
//            j = 11;
//        }
//        j++;
//    }
//}
//
//int main() {
//    transport();
//    return 0;
//}




//int main() {
//    char *s = "hello ";
//    char* q = "world";
//    printf("%s%s", s,q);
//    return 0;
//}






































