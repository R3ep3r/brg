for (i = 0; i < lim - 1; i++)
{
	c = getchar();
	if (c == EOF)
		break;
	if (c == '\n')
		break;
	s[i] = c;
}
