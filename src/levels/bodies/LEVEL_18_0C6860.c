/* LEVEL_18:0x0C6860 -- l'element courant d'un tableau est copie
   dans un tampon puis passe a une fonction de traitement. */
typedef struct {
    float f[2];
    int   n;
} Sample;

typedef struct {
    Sample items[8];
    int    cur;
    int    idx;
} Queue;

void func_0C67E8(Queue *queue);

int func_0C6860(Queue *queue, Sample *out)
{
    if (queue->cur == queue->idx)
        return 0;

    if (out == 0)
        return 0;

    *out = queue->items[queue->idx];
    func_0C67E8(queue);

    return 1;
}
