/* LEVEL_06:0x110578 -- a row of the level table is staged, one of its
   entries is handed to the spawner. */
typedef struct {
    int i[3];
} Row;

extern Row D_00206C18;

void func_027AF0(int count, int spawn, int entry);

void func_110578(int count, int spawn, int index)
{
    Row row = D_00206C18;

    func_027AF0(count - 1, spawn, row.i[index]);
}
