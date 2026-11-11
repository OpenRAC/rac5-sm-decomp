/* LEVEL_15:0x0F8620 -- calls the six handlers of the global table in order. */
typedef struct {
    void (*handler)(void);
    char pad4[0x10];
} Entry;

extern Entry D_0016F480[6];

void func_0F8620(void)
{
    int i;

    for (i = 0; i < 6; i++)
        D_0016F480[i].handler();
}
