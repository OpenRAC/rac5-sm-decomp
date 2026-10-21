/* LEVEL_04:0x003188 -- copies the caller's small record into the record
   kept by the global list. */
typedef struct {
    float f[2];
    int i;
} Small;

typedef struct {
    char pad[0x1D8];
    Small s;
} Big;

extern Big *D_002083D4;

void func_003188(Small *src)
{
    Big *d = D_002083D4;

    d->s = *src;
}
