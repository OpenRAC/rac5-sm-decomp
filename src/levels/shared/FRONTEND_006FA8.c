/* FRONTEND:0x006FA8 -- pushes the current tag into the display list. */
typedef struct {
    unsigned int w[4];
} DLIB_GIFTAG;

extern int cur_MC[];
extern char db_dlist[];
extern DLIB_GIFTAG g_cntTag[];

extern void dlib_displist_mscal__FP13DLIB_DISPLISTi(int *, int);

void func_006FA8(void)
{
    char *db;
    DLIB_GIFTAG *tag;
    int *list;
    unsigned int *q;

    if (*(int *)cur_MC >= 0) {
        db = db_dlist;
        tag = &g_cntTag[0];
        list = *(int **)(db + 0x54);
        *(DLIB_GIFTAG *)list[2] = *tag;
        q = (unsigned int *)list[1];
        q[3] = 0x13000000;
        q[1] = 0;
        q[2] = 0;
        q[0] = 0;
        list[1] += 0x10;
        *(unsigned short *)list[2] = 1;
        list[2] = list[1];
        list[1] += 0x10;
        dlib_displist_mscal__FP13DLIB_DISPLISTi(*(int **)(db + 0x54), 0);
    }
}
