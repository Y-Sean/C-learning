//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include"directory.h"
//
//void InitDirectory(Directory* dir)
//{
//	dir->size = 0;
//	memset(dir->data, 0, sizeof(dir->data));
//}
//
//void AddDirectory(Directory* dir)
//{
//	if (dir->size == MAX)
//	{
//		printf("通讯录已满！\n");
//		return;
//	}
//	printf("添加联系人\n");
//	printf("请输入姓名;>");
//	scanf("%s", dir->data[dir->size].name);
//	printf("请输入年龄;>");
//	scanf("%d", &dir->data[dir->size].age);
//	printf("请输入电话;>");
//	scanf("%s", dir->data[dir->size].tele);
//	printf("请输入地址;>");
//	scanf("%s", dir->data[dir->size].addr);
//	dir->size++;
//	printf("添加联系人成功\n");
//}
//
//int FindByName(Directory* dir, int* index)
//{
//	char name[20] = { 0 };
//	int ret = -1;
//	printf("请输入要查找的联系人姓名;>");
//	scanf("%s", name);
//	for (int i = 0; i < dir->size; i++)
//	{
//		if (strncmp(name, dir->data[i].name, strlen(dir->data[i].name)) == 0)
//		{
//			*index = i;
//			return 0;
//		}
//	}
//	return ret;
//}
//
//void DelDirectory(Directory* dir)
//{
//	if (dir->size == 0)
//	{
//		printf("没有联系人\n");
//		return;
//	}
//	int index = -1;
//	int ret = FindByName(dir, &index);
//	if (ret == 0)
//	{
//		memmove(dir->data + index, dir->data + index + 1, (dir->size - index - 1) * sizeof(dir->data[0]));
//		dir->size--;
//		printf("删除联系人成功\n");
//	}
//	else
//	{
//		printf("未找到该联系人\n");
//	}
//}
//
//void FindDirectory(Directory* dir)
//{
//	int index = -1;
//	int ret = FindByName(dir, &index);
//	if (ret == 0)
//	{
//		printf("已查询到该联系人\n");
//		printf("%-15s %-5s %-6s %-10s\n", "姓名", "年龄", "电话", "地址");
//		printf("%-15s %-5d %-6s %-10s\n", dir->data[index].name, dir->data[index].age, dir->data[index].tele, dir->data[index].addr);
//	}
//	else
//	{
//		printf("未找到该联系人\n");
//	}
//}
//
//void ModiDirectory(Directory* dir)
//{
//	int index = -1;
//	int ret = FindByName(dir, &index);
//	if (ret == 0)
//	{
//		printf("修改联系人信息;>\n");
//		printf("请输入姓名;>");
//		scanf("%s", dir->data[index].name);
//		printf("请输入年龄;>");
//		scanf("%d", &dir->data[index].age);
//		printf("请输入电话;>");
//		scanf("%s", dir->data[index].tele);
//		printf("请输入地址;>");
//		scanf("%s", dir->data[index].addr);
//		printf("修改联系人成功\n");
//	}
//}
//
//void ShowDirectory(Directory* dir)
//{
//	printf("%-15s %-5s %-6s %-10s\n", "姓名", "年龄", "电话", "地址");
//	int i = 0;
//	for (i = 0; i < dir->size; i++)
//	{
//		printf("%-15s %-5d %-6s %-10s", dir->data[i].name, dir->data[i].age, dir->data[i].tele, dir->data[i].addr);
//		printf("\n");
//	}
//}
//
//int ComByName(const void* e1, const void* e2)
//{
//	return strncmp(((PeoInfo*)e1)->name, ((PeoInfo*)e2)->name, sizeof(((PeoInfo*)e2)->name));
//}
//
//void SortDirectory(Directory* dir)
//{
//	int sz = dir->size;
//	qsort(dir->data, sz, sizeof(dir->data[0]), ComByName);
//	ShowDirectory(dir);
//}
//
//void EmptyDirectory(Directory* dir)
//{
//	dir->size = 0;
//	memset(dir->data, 0, sizeof(dir->data));
//	printf("已清空通讯录\n");
//}
//
////void qsort (void* base, size_t num, size_t size,int (*compar)(const void*, const void*));
////void bubble_sort(void* base, int sz, int width, int (*compare)(const void*, const void*))
////{
////	int i = 0;
////	for (i = 0; i < sz - 1; i++)
////	{
////		int j = 0;
////		int flag = 1;
////		for (j = 0; j < sz - 1 - i; j++)
////		{
////			if (compare((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
////			{
////				int k = 0;
////				for (k = 0; k < width; k++)
////				{
////					int tmp = *((char*)base + j * width + k);
////					*((char*)base + j * width + k) = *((char*)base + (j + 1) * width + k);
////					*((char*)base + (j + 1) * width + k) = tmp;
////				}
////				flag = 0;
////			}
////		}
////		if (flag = 1)
////		{
////			break;
////		}
////	}
////}