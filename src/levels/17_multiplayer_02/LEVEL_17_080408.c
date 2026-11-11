/* LEVEL_17:0x080408 -- placement copy of LEVEL_01_08E7B8.c: appends a block to the display list and advances its cursors. */
typedef unsigned int u32;
typedef struct { char pad_00[4]; char *p_04; char *p_08; } DL;
typedef struct { char pad_00[0x54]; DL *dl; } DB;
extern DB db_dlist;
extern char *func_07EBC0(char *old, int capacity, u32, u32, u32, u32, u32, u32, u32, u32);

void func_080408(u32 arg0, u32 arg1, u32 arg2, u32 arg3, u32 arg4, u32 arg5, u32 arg6, u32 arg7)
{
    DL *list = db_dlist.dl;
    char *old = list->p_08;
    char *next = func_07EBC0(old, 0x400, arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
    list->p_08 = next;
    list->p_04 = next + 0x10;
}
