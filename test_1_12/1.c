#define _CRT_SECURE_NO_WARNINGS 1

/*有如下宏定义和结构定义

#define MAX_SIZE A+B
struct _Record_Struct
{
	unsigned char Env_Alarm_ID : 4;
	unsigned char Para1 : 2;
	unsigned char state;
	unsigned char avail : 1;
}*Env_Alarm_Record;
struct _Record_Struct* pointer = (struct _Record_Struct*)malloc(sizeof(struct _Record_Struct) * MAX_SIZE);
//当A = 2， B = 3时，pointer分配（ ）个字节的空间。*/

//相当于pointer[5]，5个结构体的大小
//8占4，余4		4占2，余2		2舍弃，8占8		8占1			共24位，3个字节，
//开辟5个同样的空间，共15个字节

//下面代码的结果是（ ）

//int main()
//{
//	unsigned char puc[4];//占4个字节
//	struct tagPIM//占2个字节
//	{
//		unsigned char ucPim1;
//		unsigned char ucData0 : 1;
//		unsigned char ucData1 : 2;
//		unsigned char ucData2 : 3;
//	}*pstPimData;
//	pstPimData = (struct tagPIM*)puc;
//	memset(puc, 0, 4);//初始为0	//00000000 00000000 00000000 00000000
//	pstPimData->ucPim1 = 2;		//00000010
//	pstPimData->ucData0 = 3;	//00000011，1
//	pstPimData->ucData1 = 4;	//00000100，00
//	pstPimData->ucData2 = 5;	//00000101，101
//	//00000010 00101001 00000000 00000000
//	printf("%02x %02x %02x %02x\n", puc[0], puc[1], puc[2], puc[3]);
//	//02 29 00 00
//	return 0;
//}