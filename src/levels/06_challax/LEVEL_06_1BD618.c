extern void func_1CD200(void *);
extern void func_1CD658(void *);
extern int func_1CD688(int, int);

int func_1BD618(int first, char *second, char *third, int fourth)
{
    func_1CD200(second);
    func_1CD658(third);
    return func_1CD688(first, fourth);
}
