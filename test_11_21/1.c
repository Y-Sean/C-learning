#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main() {
//	int money = 20;
//	int bottles = money;
//	int empty_bottles = bottles;
//	int total_drinks = bottles;
//
//	// 当空瓶数量大于等于2时，可以继续换汽水
//	while (empty_bottles >= 2) {
//		int new_bottles = empty_bottles / 2;
//		total_drinks += new_bottles;
//		empty_bottles = new_bottles + empty_bottles % 2;
//	}
//
//	printf("20元可以喝 %d 瓶汽水。\n", total_drinks);
//
//	return 0;
//}

//#include <stdio.h>
//
//int isUpperTriangular(int arr[10][10], int num) {
//	int i = 0;
//	int j = 0;
//	int count = 1;
//	for (i = 1; i < num; i++) {
//		for (j = 0; j < i; j++) {
//			if (arr[i][j] != 0) {
//				count = 0;
//				return 0;
//			}
//		}
//	}
//	if (count)
//		return 1;
//}
//
//int main() {
//	int n = 0;
//	scanf("%d", &n);
//	if (n < 1 || n>10) {
//		printf("输入不合法，请重新输入！\n");
//	}
//	int i = 0;
//	int j = 0;
//	int arr[10][10] = { 0 };
//	for (i = 0; i < n; i++) {
//		for (j = 0; j < n; j++) {
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	if (isUpperTriangular(arr, n)) {
//		printf("YES\n");
//	}
//	else {
//		printf("NO\n");
//	}
//	return 0;
//}

//判断两个矩阵是否相等
//#include <stdio.h>
//
//int matrice_is_equal(int num1[100][10], int num2[100][10], int n, int m) {
//    int i = 0;
//    int j = 0;
//    for (i = 0; i < n; i++) {
//        for (j = 0; j < m; j++) {
//            if (num1[i][j] != num2[i][j])
//                return 0;
//        }
//    }
//    return 1;
//}
//
//int main() {
//    int n = 0;
//    int m = 0;
//    scanf("%d %d", &n, &m);
//    int num1[100][10] = { 0 };
//    int num2[100][10] = { 0 };
//    int i = 0;
//    int j = 0;
//    for (i = 0; i < n; i++) {
//        for (j = 0; j < m; j++) {
//            scanf("%d", &num1[i][j]);
//        }
//    }
//    for (i = 0; i < n; i++) {
//        for (j = 0; j < m; j++) {
//            scanf("%d", &num2[i][j]);
//        }
//    }
//    if (matrice_is_equal(num1, num2, n, m))
//        printf("Yes\n");
//    else
//        printf("No\n");
//    return 0;
//}