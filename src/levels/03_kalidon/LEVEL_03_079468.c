extern void func_074898(void);
extern void func_078D60(void);
extern void func_074FF0(void);
extern void func_074170(void *object, int value);
extern void func_078D18(void *object, int value);
extern void func_0751A8(void *object, int value);

void func_079468(void *object, int value, int target)
{
    if (target == (int)(void *)func_074898) {
        func_074170(object, value);
    } else if (target == (int)(void *)func_078D60) {
        func_078D18(object, value);
    } else if (target == (int)(void *)func_074FF0) {
        func_0751A8(object, value);
    }
}
