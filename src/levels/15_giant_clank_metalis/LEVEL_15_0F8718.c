/* LEVEL_15:0x0F8718 -- calls the handler stored in the object's table entry (20-byte entries indexed by the word at offset 0x14), passing the object. */
typedef struct {
    int w_00;
    int w_04;
    int w_08;
    void (*handler_0C)(void *object);
    int w_10;
} Entry;

extern Entry D_0016F480[];

void func_0F8718(char *object)
{
    Entry *e = &D_0016F480[*(int *)(object + 0x14)];

    e->handler_0C(object);
}
