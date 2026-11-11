/* LEVEL_01:0x157150 -- runs a helper on the object unless the sixth argument carries the expected id; always returns 3. */
typedef struct {
    char pad00[0x24];
    unsigned int id;
} Info;

typedef struct {
    char pad00[0x40];
    Info *info;
} Other;

extern void func_07C670(void *object, int flag);

int func_157150(void *object, int a1, int a2, int a3, int a4, Other *other)
{
    if (other == 0 || other->info->id != 0x9707D8E6u) {
        func_07C670(object, 1);
    }
    return 3;
}
