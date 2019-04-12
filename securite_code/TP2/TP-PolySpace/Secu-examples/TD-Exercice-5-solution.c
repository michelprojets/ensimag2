void complain(const char *msg)
{
	errno_t err;
	static const char prefix[] = "Error: ";
	static const char suffix[] = "\n";
	char buf[BUFSIZ];

	err = strcpy_s(buf, sizeof(buf), prefix);
	if (err != 0)
	{

		/* Handle error */
	}
	err = strcat_s(buf, sizeof(buf), msg);
	if (err != 0)
	{

		/* Handle error */
	}
	err = strcat_s(buf, sizeof(buf), suffix);
	if (err != 0)
	{

		/* Handle error */
	}
	fputs(buf, stderr);
}
