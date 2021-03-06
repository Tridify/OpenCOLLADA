/*
    Copyright (c) 2008-2009 NetAllied Systems GmbH

    This file is part of MayaDataModel.

    Licensed under the MIT Open Source License,
    for details please see LICENSE file or the website
    http://www.opensource.org/licenses/mit-license.php
*/
#ifndef __MayaDM_POLYPRIMITIVEMISC_H__
#define __MayaDM_POLYPRIMITIVEMISC_H__
#include "MayaDMTypes.h"
#include "MayaDMConnectables.h"
#include "MayaDMPolyPrimitive.h"
namespace MayaDM
{
class PolyPrimitiveMisc : public PolyPrimitive
{
public:
public:

	PolyPrimitiveMisc():PolyPrimitive(){}
	PolyPrimitiveMisc(FILE* file,const std::string& name,const std::string& parent="",bool shared=false,bool create=true)
		:PolyPrimitive(file, name, parent, "polyPrimitiveMisc", shared, create){}
	virtual ~PolyPrimitiveMisc(){}

	void setRadius(double r)
	{
		if(r == 1) return;
		fprintf(mFile,"\tsetAttr \".r\" %f;\n", r);
	}
	void setSideLength(double l)
	{
		if(l == 0) return;
		fprintf(mFile,"\tsetAttr \".l\" %f;\n", l);
	}
	void setPolyType(unsigned int pt)
	{
		if(pt == 0) return;
		fprintf(mFile,"\tsetAttr \".pt\" %i;\n", pt);
	}
	void setTexture(unsigned int tx)
	{
		if(tx == 2) return;
		fprintf(mFile,"\tsetAttr \".tx\" %i;\n", tx);
	}
	void setCreateUVs(unsigned int cuv)
	{
		if(cuv == 3) return;
		fprintf(mFile,"\tsetAttr \".cuv\" %i;\n", cuv);
	}
	void getRadius()const
	{
		fprintf(mFile,"\"%s.r\"",mName.c_str());
	}
	void getSideLength()const
	{
		fprintf(mFile,"\"%s.l\"",mName.c_str());
	}
	void getPolyType()const
	{
		fprintf(mFile,"\"%s.pt\"",mName.c_str());
	}
	void getTexture()const
	{
		fprintf(mFile,"\"%s.tx\"",mName.c_str());
	}
	void getCreateUVs()const
	{
		fprintf(mFile,"\"%s.cuv\"",mName.c_str());
	}
protected:
	PolyPrimitiveMisc(FILE* file,const std::string& name,const std::string& parent,const std::string& nodeType,bool shared=false,bool create=true)
		:PolyPrimitive(file, name, parent, nodeType, shared, create) {}

};
}//namespace MayaDM
#endif//__MayaDM_POLYPRIMITIVEMISC_H__
