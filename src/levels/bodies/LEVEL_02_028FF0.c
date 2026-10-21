/* LEVEL_02.REL 0x028FF0 -- copies one 52-byte row of floats out of the
   level's table into the global row. */
typedef struct {
    float f[13];
} Row;

typedef struct {
    char pad[0xE8];
    Row rows[2];
} Table;

extern Table *D_208C2C;
extern Row D_248440;

void func(int index)
{
    D_248440 = *(Row *)((char *)D_208C2C->rows + index * 52);
}
