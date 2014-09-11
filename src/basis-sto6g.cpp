/*
 * basis-sto6g.cpp
 *
 * hfcxx package <https://github.com/ifilot/hfcxx>
 *
 * Author: Ivo Filot <ivo@zuidstijl.nl>
 * Description:
 */
 
#include "basis.h"

void Basis::addGTOs_sto6g(std::string type, unsigned int z, Vec3 r) {
	/* (1) HYDROGEN */
	if(type.compare("1s")==0 && z==1) {
		addGTO_s(35.523221220000003, 0.0091635962800000002,r);
		addGTO_s(6.5131437249999999, 0.049361492940000001,r);
		addGTO_s(1.8221429039999999, 0.16853830489999999,r);
		addGTO_s(0.62595526599999995, 0.3705627997,r);
		addGTO_s(0.24307674700000001, 0.41649152979999998,r);
		addGTO_s(0.100112428, 0.1303340841,r);
	}
	/* (2) HELIUM */
	if(type.compare("1s")==0 && z==2) {
		addGTO_s(65.984568240000002, 0.0091635962800000002,r);
		addGTO_s(12.09819836, 0.049361492940000001,r);
		addGTO_s(3.384639924, 0.16853830489999999,r);
		addGTO_s(1.1627151630000001, 0.3705627997,r);
		addGTO_s(0.45151632200000003, 0.41649152979999998,r);
		addGTO_s(0.18595935599999999, 0.1303340841,r);
	}
	/* (3) LITHIUM */
	if(type.compare("1s")==0 && z==3) {
		addGTO_s(167.1758462, 0.0091635962800000002,r);
		addGTO_s(30.651508400000001, 0.049361492940000001,r);
		addGTO_s(8.5751874770000001, 0.16853830489999999,r);
		addGTO_s(2.9458083369999999, 0.3705627997,r);
		addGTO_s(1.143943581, 0.41649152979999998,r);
		addGTO_s(0.47113913909999999, 0.1303340841,r);
	}
	if(type.compare("2s")==0 && z==3) {
		addGTO_s(6.5975639810000004, -0.01325278809,r);
		addGTO_s(1.3058300920000001, -0.046991710139999997,r);
		addGTO_s(0.4058510193, -0.033785371510000002,r);
		addGTO_s(0.1561455158, 0.25024178609999997,r);
		addGTO_s(0.067814103900000006, 0.59511725260000004,r);
		addGTO_s(0.0310841655, 0.24070617629999999,r);
	}
	if(type.compare("2px")==0 && z==3) {
		addGTO_px(6.5975639810000004, 0.0037596966000000001,r);
		addGTO_px(1.3058300920000001, 0.037679369800000001,r);
		addGTO_px(0.4058510193, 0.17389674350000001,r);
		addGTO_px(0.1561455158, 0.41803643470000001,r);
		addGTO_px(0.067814103900000006, 0.42585954770000001,r);
		addGTO_px(0.0310841655, 0.1017082955,r);
	}
	if(type.compare("2py")==0 && z==3) {
		addGTO_py(6.5975639810000004, 0.0037596966000000001,r);
		addGTO_py(1.3058300920000001, 0.037679369800000001,r);
		addGTO_py(0.4058510193, 0.17389674350000001,r);
		addGTO_py(0.1561455158, 0.41803643470000001,r);
		addGTO_py(0.067814103900000006, 0.42585954770000001,r);
		addGTO_py(0.0310841655, 0.1017082955,r);
	}
	if(type.compare("2pz")==0 && z==3) {
		addGTO_pz(6.5975639810000004, 0.0037596966000000001,r);
		addGTO_pz(1.3058300920000001, 0.037679369800000001,r);
		addGTO_pz(0.4058510193, 0.17389674350000001,r);
		addGTO_pz(0.1561455158, 0.41803643470000001,r);
		addGTO_pz(0.067814103900000006, 0.42585954770000001,r);
		addGTO_pz(0.0310841655, 0.1017082955,r);
	} 
	/* (4) BERLYLLIUM */
	if(type.compare("1s")==0 && z==4) {
		addGTO_s(312.8704937, 0.0091635962800000002,r);
		addGTO_s(57.364462529999997, 0.049361492940000001,r);
		addGTO_s(16.0485094, 0.16853830489999999,r);
		addGTO_s(5.5130961190000001, 0.3705627997,r);
		addGTO_s(2.1408965530000001, 0.41649152979999998,r);
		addGTO_s(0.88173942829999996, 0.1303340841,r);
	}
	if(type.compare("2s")==0 && z==4) {
		addGTO_s(13.63324744, -0.01325278809,r);
       	addGTO_s(2.6983754640000002, -0.046991710139999997,r);
       	addGTO_s(0.83865308289999996, -0.033785371510000002,r);
       	addGTO_s(0.3226600698, 0.25024178609999997,r);
       	addGTO_s(0.14013148819999999, 0.59511725260000004,r);
       	addGTO_s(0.064232513899999996, 0.24070617629999999,r);
	}
	if(type.compare("2px")==0 && z==4) {
		addGTO_px(13.63324744, 0.0037596966000000001,r);
       	addGTO_px(2.6983754640000002, 0.037679369800000001,r);
       	addGTO_px(0.83865308289999996, 0.17389674350000001,r);
       	addGTO_px(0.3226600698, 0.41803643470000001,r);
       	addGTO_px(0.14013148819999999, 0.42585954770000001,r);
       	addGTO_px(0.064232513899999996, 0.1017082955,r);
	}
	if(type.compare("2py")==0 && z==4) {
		addGTO_py(13.63324744, 0.0037596966000000001,r);
       	addGTO_py(2.6983754640000002, 0.037679369800000001,r);
       	addGTO_py(0.83865308289999996, 0.17389674350000001,r);
       	addGTO_py(0.3226600698, 0.41803643470000001,r);
       	addGTO_py(0.14013148819999999, 0.42585954770000001,r);
       	addGTO_py(0.064232513899999996, 0.1017082955,r);
	}
	if(type.compare("2pz")==0 && z==4) {
		addGTO_pz(13.63324744, 0.0037596966000000001,r);
       	addGTO_pz(2.6983754640000002, 0.037679369800000001,r);
       	addGTO_pz(0.83865308289999996, 0.17389674350000001,r);
       	addGTO_pz(0.3226600698, 0.41803643470000001,r);
       	addGTO_pz(0.14013148819999999, 0.42585954770000001,r);
       	addGTO_pz(0.064232513899999996, 0.1017082955,r);
	}
	/* (5) BORON */
	if(type.compare("1s")==0 && z==5) {
		addGTO_s(1355.5842339999999, 0.0091635962800000002,r);
       	addGTO_s(248.54488549999999, 0.049361492940000001,r);
       	addGTO_s(69.53390229, 0.16853830489999999,r);
       	addGTO_s(23.886772109999999, 0.3705627997,r);
       	addGTO_s(9.2759326089999998, 0.41649152979999998,r);
       	addGTO_s(3.8203412980000002, 0.1303340841,r);
	}
	if(type.compare("2s")==0 && z==5) {
		addGTO_s(52.187761960000003, -0.01325278809,r);
       	addGTO_s(10.329320060000001, -0.046991710139999997,r);
       	addGTO_s(3.2103449770000001, -0.033785371510000002,r);
       	addGTO_s(1.235135428, 0.25024178609999997,r);
       	addGTO_s(5.3642015809999997, 0.59511725260000004,r);
       	addGTO_s(0.245880606, 0.24070617629999999,r);
	}
	if(type.compare("2px")==0 && z==5) {
		addGTO_px(52.187761960000003, 0.00375969662,r);
       	addGTO_px(10.329320060000001, 0.037679369839999997,r);
       	addGTO_px(3.2103449770000001, 0.17389674350000001,r);
       	addGTO_px(1.235135428, 0.41803643470000001,r);
       	addGTO_px(5.3642015809999997, 0.42585954770000001,r);
       	addGTO_px(0.245880606, 0.1017082955,r);
	}
	if(type.compare("2py")==0 && z==5) {
		addGTO_py(52.187761960000003, 0.00375969662,r);
       	addGTO_py(10.329320060000001, 0.037679369839999997,r);
       	addGTO_py(3.2103449770000001, 0.17389674350000001,r);
       	addGTO_py(1.235135428, 0.41803643470000001,r);
       	addGTO_py(5.3642015809999997, 0.42585954770000001,r);
       	addGTO_py(0.245880606, 0.1017082955,r);
	}
	if(type.compare("2pz")==0 && z==5) {
		addGTO_pz(52.187761960000003, 0.00375969662,r);
       	addGTO_pz(10.329320060000001, 0.037679369839999997,r);
       	addGTO_pz(3.2103449770000001, 0.17389674350000001,r);
       	addGTO_pz(1.235135428, 0.41803643470000001,r);
       	addGTO_pz(5.3642015809999997, 0.42585954770000001,r);
       	addGTO_pz(0.245880606, 0.1017082955,r);
	}
	/* (6) CARBON */
	if(type.compare("1s")==0 && z==6) {
		addGTO_s(742.73704910000004, 0.0091635962800000002,r);
       	addGTO_s(136.18002490000001, 0.049361492940000001,r);
       	addGTO_s(38.098263520000003, 0.16853830489999999,r);
       	addGTO_s(13.087781769999999, 0.3705627997,r);
       	addGTO_s(5.0823686480000001, 0.41649152979999998,r);
       	addGTO_s(2.093200076, 0.1303340841,r);
	}
	if(type.compare("2s")==0 && z==6) {
		addGTO_s(30.497239499999999, -0.01325278809,r);
       	addGTO_s(6.0361996009999999, -0.046991710139999997,r);
       	addGTO_s(1.876046337, -0.033785371510000002,r);
       	addGTO_s(0.72178264700000005, 0.25024178609999997,r);
       	addGTO_s(0.3134706954, 0.59511725260000004,r);
       	addGTO_s(0.14368655499999999, 0.24070617629999999,r);
	}
	if(type.compare("2px")==0 && z==6) {
		addGTO_px(30.497239499999999, 0.0037596966000000001,r);
       	addGTO_px(6.0361996009999999, 0.037679369800000001,r);
       	addGTO_px(1.876046337, 0.17389674350000001,r);
       	addGTO_px(0.72178264700000005, 0.41803643470000001,r);
       	addGTO_px(0.3134706954, 0.42585954770000001,r);
       	addGTO_px(0.14368655499999999, 0.1017082955,r);
	}
	if(type.compare("2py")==0 && z==6) {
		addGTO_py(30.497239499999999, 0.0037596966000000001,r);
       	addGTO_py(6.0361996009999999, 0.037679369800000001,r);
       	addGTO_py(1.876046337, 0.17389674350000001,r);
       	addGTO_py(0.72178264700000005, 0.41803643470000001,r);
       	addGTO_py(0.3134706954, 0.42585954770000001,r);
       	addGTO_py(0.14368655499999999, 0.1017082955,r);
	}
	if(type.compare("2pz")==0 && z==6) {
		addGTO_pz(30.497239499999999, 0.0037596966000000001,r);
       	addGTO_pz(6.0361996009999999, 0.037679369800000001,r);
       	addGTO_pz(1.876046337, 0.17389674350000001,r);
       	addGTO_pz(0.72178264700000005, 0.41803643470000001,r);
       	addGTO_px(0.3134706954, 0.42585954770000001,r);
       	addGTO_pz(0.14368655499999999, 0.1017082955,r);
	}
	/* (7) NITROGEN */
	if(type.compare("1s")==0 && z==7) {
		addGTO_s(1027.828458, 0.0091635962800000002,r);
       	addGTO_s(188.45122259999999, 0.049361492940000001,r);
       	addGTO_s(52.721860970000002, 0.16853830489999999,r);
       	addGTO_s(18.111382169999999, 0.3705627997,r);
       	addGTO_s(7.033179691, 0.41649152979999998,r);
       	addGTO_s(2.8966517939999998, 0.1303340841,r);
	}
	if(type.compare("2s")==0 && z==7) {
		addGTO_s(39.198807870000003, -0.01325278809,r);
       	addGTO_s(7.7584670710000001, -0.046991710139999997,r);
       	addGTO_s(2.4113257830000001, -0.033785371510000002,r);
       	addGTO_s(0.9277239437, 0.25024178609999997,r);
       	addGTO_s(0.40291114099999997, 0.59511725260000004,r);
       	addGTO_s(0.18468365519999999, 0.24070617629999999,r);
	}
	if(type.compare("2px")==0 && z==7) {
		addGTO_px(39.198807870000003, 0.0037596966000000001,r);
       	addGTO_px(7.7584670710000001, 0.037679369800000001,r);
       	addGTO_px(2.4113257830000001, 0.17389674350000001,r);
       	addGTO_px(0.9277239437, 0.41803643470000001,r);
       	addGTO_px(0.40291114099999997, 0.42585954770000001,r);
       	addGTO_px(0.18468365519999999, 0.1017082955,r);
	}
	if(type.compare("2py")==0 && z==7) {
		addGTO_py(39.198807870000003, 0.0037596966000000001,r);
       	addGTO_py(7.7584670710000001, 0.037679369800000001,r);
       	addGTO_py(2.4113257830000001, 0.17389674350000001,r);
       	addGTO_py(0.9277239437, 0.41803643470000001,r);
       	addGTO_py(0.40291114099999997, 0.42585954770000001,r);
       	addGTO_py(0.18468365519999999, 0.1017082955,r);
	}
	if(type.compare("2pz")==0 && z==7) {
		addGTO_pz(39.198807870000003, 0.0037596966000000001,r);
       	addGTO_pz(7.7584670710000001, 0.037679369800000001,r);
       	addGTO_pz(2.4113257830000001, 0.17389674350000001,r);
       	addGTO_pz(0.9277239437, 0.41803643470000001,r);
       	addGTO_pz(0.40291114099999997, 0.42585954770000001,r);
       	addGTO_pz(0.18468365519999999, 0.1017082955,r);
	}
	/* (8) OXYGEN */
	if(type.compare("1s")==0 && z==8) {
		addGTO_s(1355.5842339999999, 0.0091635962800000002,r);
       	addGTO_s(248.54488549999999, 0.049361492940000001,r);
       	addGTO_s(69.53390229, 0.16853830489999999,r);
       	addGTO_s(23.886772109999999, 0.3705627997,r);
       	addGTO_s(9.2759326089999998, 0.41649152979999998,r);
       	addGTO_s(3.8203412980000002, 0.1303340841,r);
	}
	if(type.compare("2s")==0 && z==8) {
		addGTO_s(52.187761960000003, -0.01325278809,r);
       	addGTO_s(10.329320060000001, -0.046991710139999997,r);
       	addGTO_s(3.2103449770000001, -0.033785371510000002,r);
       	addGTO_s(1.235135428, 0.25024178609999997,r);
       	addGTO_s(0.53642015799999998, 0.59511725260000004,r);
       	addGTO_s(0.245880606, 0.24070617629999999,r);
	}
	if(type.compare("2px")==0 && z==8) {
		addGTO_px(52.187761960000003, 0.0037596966000000001,r);
       	addGTO_px(10.329320060000001, 0.037679369800000001,r);
       	addGTO_px(3.2103449770000001, 0.17389674350000001,r);
       	addGTO_px(1.235135428, 0.41803643470000001,r);
       	addGTO_px(0.53642015799999998, 0.42585954770000001,r);
       	addGTO_px(0.245880606, 0.1017082955,r);
	}
	if(type.compare("2py")==0 && z==8) {
		addGTO_py(52.187761960000003, 0.0037596966000000001,r);
       	addGTO_py(10.329320060000001, 0.037679369800000001,r);
       	addGTO_py(3.2103449770000001, 0.17389674350000001,r);
       	addGTO_py(1.235135428, 0.41803643470000001,r);
       	addGTO_py(0.53642015799999998, 0.42585954770000001,r);
       	addGTO_py(0.245880606, 0.1017082955,r);
	}
	if(type.compare("2pz")==0 && z==8) {
		addGTO_pz(52.187761960000003, 0.0037596966000000001,r);
       	addGTO_pz(10.329320060000001, 0.037679369800000001,r);
       	addGTO_pz(3.2103449770000001, 0.17389674350000001,r);
       	addGTO_pz(1.235135428, 0.41803643470000001,r);
       	addGTO_pz(0.53642015799999998, 0.42585954770000001,r);
       	addGTO_pz(0.245880606, 0.1017082955,r);
	}
}
