/*
    Copyright (c) 2008-2009 NetAllied Systems GmbH

    This file is part of MayaDataModel.

    Licensed under the MIT Open Source License,
    for details please see LICENSE file or the website
    http://www.opensource.org/licenses/mit-license.php
*/
#ifndef __MayaDM_FILLETCURVE_H__
#define __MayaDM_FILLETCURVE_H__
#include "MayaDMTypes.h"
#include "MayaDMConnectables.h"
#include "MayaDMAbstractBaseCreate.h"
namespace MayaDM
{
class FilletCurve : public AbstractBaseCreate
{
public:
public:
	FilletCurve():AbstractBaseCreate(){}
	FilletCurve(FILE* file,const std::string& name,const std::string& parent=""):AbstractBaseCreate(file, name, parent, "filletCurve"){}
	virtual ~FilletCurve(){}
	void setRadius(double r)
	{
		if(r == 1) return;
		fprintf(mFile,"\tsetAttr \".r\" %f;\n", r);

	}
	void setDepth(double d)
	{
		if(d == 0) return;
		fprintf(mFile,"\tsetAttr \".d\" %f;\n", d);

	}
	void setBias(double b)
	{
		if(b == 0) return;
		fprintf(mFile,"\tsetAttr \".b\" %f;\n", b);

	}
	void setCurveParameter1(double cp1)
	{
		if(cp1 == 0.0) return;
		fprintf(mFile,"\tsetAttr \".cp1\" %f;\n", cp1);

	}
	void setCurveParameter2(double cp2)
	{
		if(cp2 == 0.0) return;
		fprintf(mFile,"\tsetAttr \".cp2\" %f;\n", cp2);

	}
	void setTrim(bool t)
	{
		if(t == false) return;
		fprintf(mFile,"\tsetAttr \".t\" %i;\n", t);

	}
	void setJoin(bool jn)
	{
		if(jn == false) return;
		fprintf(mFile,"\tsetAttr \".jn\" %i;\n", jn);

	}
	void setCircular(bool cir)
	{
		if(cir == true) return;
		fprintf(mFile,"\tsetAttr \".cir\" %i;\n", cir);

	}
	void setFreeformBlend(bool fb)
	{
		if(fb == false) return;
		fprintf(mFile,"\tsetAttr \".fb\" %i;\n", fb);

	}
	void setBlendControl(bool bc)
	{
		if(bc == false) return;
		fprintf(mFile,"\tsetAttr \".bc\" %i;\n", bc);

	}
	void getPrimaryCurve()
	{
		fprintf(mFile,"\"%s.pc\"",mName.c_str());

	}
	void getSecondaryCurve()
	{
		fprintf(mFile,"\"%s.sc\"",mName.c_str());

	}
	void getOutputCurve()
	{
		fprintf(mFile,"\"%s.oc\"",mName.c_str());

	}
	void getDetachedCurve1()
	{
		fprintf(mFile,"\"%s.dc1\"",mName.c_str());

	}
	void getDetachedCurve2()
	{
		fprintf(mFile,"\"%s.dc2\"",mName.c_str());

	}
	void getRadius()
	{
		fprintf(mFile,"\"%s.r\"",mName.c_str());

	}
	void getDepth()
	{
		fprintf(mFile,"\"%s.d\"",mName.c_str());

	}
	void getBias()
	{
		fprintf(mFile,"\"%s.b\"",mName.c_str());

	}
	void getCurveParameter1()
	{
		fprintf(mFile,"\"%s.cp1\"",mName.c_str());

	}
	void getCurveParameter2()
	{
		fprintf(mFile,"\"%s.cp2\"",mName.c_str());

	}
	void getTrim()
	{
		fprintf(mFile,"\"%s.t\"",mName.c_str());

	}
	void getJoin()
	{
		fprintf(mFile,"\"%s.jn\"",mName.c_str());

	}
	void getCircular()
	{
		fprintf(mFile,"\"%s.cir\"",mName.c_str());

	}
	void getFreeformBlend()
	{
		fprintf(mFile,"\"%s.fb\"",mName.c_str());

	}
	void getBlendControl()
	{
		fprintf(mFile,"\"%s.bc\"",mName.c_str());

	}
protected:
	FilletCurve(FILE* file,const std::string& name,const std::string& parent,const std::string& nodeType)
		:AbstractBaseCreate(file, name, parent, nodeType) {}

};
}//namespace MayaDM
#endif//__MayaDM_FILLETCURVE_H__