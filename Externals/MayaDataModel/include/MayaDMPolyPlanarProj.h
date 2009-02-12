/*
    Copyright (c) 2008-2009 NetAllied Systems GmbH

    This file is part of MayaDataModel.

    Licensed under the MIT Open Source License,
    for details please see LICENSE file or the website
    http://www.opensource.org/licenses/mit-license.php
*/
#ifndef __MayaDM_POLYPLANARPROJ_H__
#define __MayaDM_POLYPLANARPROJ_H__
#include "MayaDMTypes.h"
#include "MayaDMConnectables.h"
#include "MayaDMPolyModifierWorld.h"
namespace MayaDM
{
class PolyPlanarProj : public PolyModifierWorld
{
public:
public:
	PolyPlanarProj():PolyModifierWorld(){}
	PolyPlanarProj(FILE* file,const std::string& name,const std::string& parent=""):PolyModifierWorld(file, name, parent, "polyPlanarProj"){}
	virtual ~PolyPlanarProj(){}
	void setProjectionCenter(const double3& pc)
	{
		if(pc == double3(0.0, 0.0, 0.0)) return;
		fprintf(mFile,"\tsetAttr \".pc\" -type \"double3\" ");
		pc.write(mFile);
		fprintf(mFile,";\n");

	}
	void setProjectionCenterX(double pcx)
	{
		if(pcx == 0) return;
		fprintf(mFile,"\tsetAttr \".pc.pcx\" %f;\n", pcx);

	}
	void setProjectionCenterY(double pcy)
	{
		if(pcy == 0) return;
		fprintf(mFile,"\tsetAttr \".pc.pcy\" %f;\n", pcy);

	}
	void setProjectionCenterZ(double pcz)
	{
		if(pcz == 0) return;
		fprintf(mFile,"\tsetAttr \".pc.pcz\" %f;\n", pcz);

	}
	void setImageCenter(const double2& ic)
	{
		if(ic == double2(0.5, 0.5)) return;
		fprintf(mFile,"\tsetAttr \".ic\" -type \"double2\" ");
		ic.write(mFile);
		fprintf(mFile,";\n");

	}
	void setImageCenterX(double icx)
	{
		if(icx == 0.0) return;
		fprintf(mFile,"\tsetAttr \".ic.icx\" %f;\n", icx);

	}
	void setImageCenterY(double icy)
	{
		if(icy == 0.0) return;
		fprintf(mFile,"\tsetAttr \".ic.icy\" %f;\n", icy);

	}
	void setRotate(const double3& ro)
	{
		if(ro == double3(0.0, 0.0, 0.0)) return;
		fprintf(mFile,"\tsetAttr \".ro\" -type \"double3\" ");
		ro.write(mFile);
		fprintf(mFile,";\n");

	}
	void setRotateX(double rx)
	{
		if(rx == 0) return;
		fprintf(mFile,"\tsetAttr \".ro.rx\" %f;\n", rx);

	}
	void setRotateY(double ry)
	{
		if(ry == 0) return;
		fprintf(mFile,"\tsetAttr \".ro.ry\" %f;\n", ry);

	}
	void setRotateZ(double rz)
	{
		if(rz == 0) return;
		fprintf(mFile,"\tsetAttr \".ro.rz\" %f;\n", rz);

	}
	void setProjectionScale(const double2& ps)
	{
		if(ps == double2(1.0, 1.0)) return;
		fprintf(mFile,"\tsetAttr \".ps\" -type \"double2\" ");
		ps.write(mFile);
		fprintf(mFile,";\n");

	}
	void setProjectionWidth(double pw)
	{
		if(pw == 0) return;
		fprintf(mFile,"\tsetAttr \".ps.pw\" %f;\n", pw);

	}
	void setProjectionHeight(double ph)
	{
		if(ph == 0) return;
		fprintf(mFile,"\tsetAttr \".ps.ph\" %f;\n", ph);

	}
	void setUvSetName(const string& uvs)
	{
		if(uvs == "NULL") return;
		fprintf(mFile,"\tsetAttr \".uvs\" -type \"string\" ");
		uvs.write(mFile);
		fprintf(mFile,";\n");

	}
	void setImageScale(const double2& is)
	{
		if(is == double2(1.0, 1.0)) return;
		fprintf(mFile,"\tsetAttr \".is\" -type \"double2\" ");
		is.write(mFile);
		fprintf(mFile,";\n");

	}
	void setImageScaleU(double isu)
	{
		if(isu == 0.0) return;
		fprintf(mFile,"\tsetAttr \".is.isu\" %f;\n", isu);

	}
	void setImageScaleV(double isv)
	{
		if(isv == 0.0) return;
		fprintf(mFile,"\tsetAttr \".is.isv\" %f;\n", isv);

	}
	void setRotationAngle(double ra)
	{
		if(ra == 0) return;
		fprintf(mFile,"\tsetAttr \".ra\" %f;\n", ra);

	}
	void setRadius(double r)
	{
		if(r == 1) return;
		fprintf(mFile,"\tsetAttr \".r\" %f;\n", r);

	}
	void setIsPerspective(bool per)
	{
		if(per == false) return;
		fprintf(mFile,"\tsetAttr \".per\" %i;\n", per);

	}
	void setCameraMatrix(const matrix& cam)
	{
		fprintf(mFile,"\tsetAttr \".cam\" -type \"matrix\" ");
		cam.write(mFile);
		fprintf(mFile,";\n");

	}
	void setPortLeft(short plft)
	{
		if(plft == 0) return;
		fprintf(mFile,"\tsetAttr \".plft\" %i;\n", plft);

	}
	void setPortBottom(short pbot)
	{
		if(pbot == 0) return;
		fprintf(mFile,"\tsetAttr \".pbot\" %i;\n", pbot);

	}
	void setPortRight(short prgt)
	{
		if(prgt == 10) return;
		fprintf(mFile,"\tsetAttr \".prgt\" %i;\n", prgt);

	}
	void setPortTop(short ptop)
	{
		if(ptop == 10) return;
		fprintf(mFile,"\tsetAttr \".ptop\" %i;\n", ptop);

	}
	void getProjectionCenter()
	{
		fprintf(mFile,"\"%s.pc\"",mName.c_str());

	}
	void getProjectionCenterX()
	{
		fprintf(mFile,"\"%s.pc.pcx\"",mName.c_str());

	}
	void getProjectionCenterY()
	{
		fprintf(mFile,"\"%s.pc.pcy\"",mName.c_str());

	}
	void getProjectionCenterZ()
	{
		fprintf(mFile,"\"%s.pc.pcz\"",mName.c_str());

	}
	void getImageCenter()
	{
		fprintf(mFile,"\"%s.ic\"",mName.c_str());

	}
	void getImageCenterX()
	{
		fprintf(mFile,"\"%s.ic.icx\"",mName.c_str());

	}
	void getImageCenterY()
	{
		fprintf(mFile,"\"%s.ic.icy\"",mName.c_str());

	}
	void getRotate()
	{
		fprintf(mFile,"\"%s.ro\"",mName.c_str());

	}
	void getRotateX()
	{
		fprintf(mFile,"\"%s.ro.rx\"",mName.c_str());

	}
	void getRotateY()
	{
		fprintf(mFile,"\"%s.ro.ry\"",mName.c_str());

	}
	void getRotateZ()
	{
		fprintf(mFile,"\"%s.ro.rz\"",mName.c_str());

	}
	void getProjectionScale()
	{
		fprintf(mFile,"\"%s.ps\"",mName.c_str());

	}
	void getProjectionWidth()
	{
		fprintf(mFile,"\"%s.ps.pw\"",mName.c_str());

	}
	void getProjectionHeight()
	{
		fprintf(mFile,"\"%s.ps.ph\"",mName.c_str());

	}
	void getUvSetName()
	{
		fprintf(mFile,"\"%s.uvs\"",mName.c_str());

	}
	void getImageScale()
	{
		fprintf(mFile,"\"%s.is\"",mName.c_str());

	}
	void getImageScaleU()
	{
		fprintf(mFile,"\"%s.is.isu\"",mName.c_str());

	}
	void getImageScaleV()
	{
		fprintf(mFile,"\"%s.is.isv\"",mName.c_str());

	}
	void getRotationAngle()
	{
		fprintf(mFile,"\"%s.ra\"",mName.c_str());

	}
	void getRadius()
	{
		fprintf(mFile,"\"%s.r\"",mName.c_str());

	}
	void getCompId()
	{
		fprintf(mFile,"\"%s.cid\"",mName.c_str());

	}
	void getIsPerspective()
	{
		fprintf(mFile,"\"%s.per\"",mName.c_str());

	}
	void getCameraMatrix()
	{
		fprintf(mFile,"\"%s.cam\"",mName.c_str());

	}
	void getPortLeft()
	{
		fprintf(mFile,"\"%s.plft\"",mName.c_str());

	}
	void getPortBottom()
	{
		fprintf(mFile,"\"%s.pbot\"",mName.c_str());

	}
	void getPortRight()
	{
		fprintf(mFile,"\"%s.prgt\"",mName.c_str());

	}
	void getPortTop()
	{
		fprintf(mFile,"\"%s.ptop\"",mName.c_str());

	}
protected:
	PolyPlanarProj(FILE* file,const std::string& name,const std::string& parent,const std::string& nodeType)
		:PolyModifierWorld(file, name, parent, nodeType) {}

};
}//namespace MayaDM
#endif//__MayaDM_POLYPLANARPROJ_H__