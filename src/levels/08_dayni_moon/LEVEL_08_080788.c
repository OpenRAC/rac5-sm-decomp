extern int *func_080D60(int key);

int func_080788(void *key)
{
    int *entry = func_080D60((int)key);
    return entry[1];
}
