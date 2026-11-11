/* Forward to asyncPs2fioRead. */
extern int asyncPs2fioRead(int handle, void *buffer, unsigned int size);

int func_029730(int handle, void *buffer, unsigned int size)
{
    return asyncPs2fioRead(handle, buffer, size);
}
