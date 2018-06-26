/******************************
******************************/
unsigned int float2hex(float val)
{
	union converter{
		float f_val;
		unsigned int u_val;
	};
 
	union converter var;
	var.f_val = val;
	return var.u_val;
}

