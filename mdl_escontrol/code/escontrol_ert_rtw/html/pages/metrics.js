function CodeMetrics() {
	 this.metricsArray = {};
	 this.metricsArray.var = new Array();
	 this.metricsArray.fcn = new Array();
	 this.metricsArray.var["escontrol_P"] = {file: "C:\\repos\\GitLab\\rtoptimisation-group\\extremumseeking\\mdl_escontrol\\code\\escontrol_ert_rtw\\escontrol_data.c",
	size: 240};
	 this.metricsArray.fcn["escontrol_ESC_DT"] = {file: "C:\\repos\\GitLab\\rtoptimisation-group\\extremumseeking\\mdl_escontrol\\code\\escontrol_ert_rtw\\escontrol.c",
	stack: 170,
	stackTotal: 170};
	 this.metricsArray.fcn["escontrol_ESC_DT_Init"] = {file: "C:\\repos\\GitLab\\rtoptimisation-group\\extremumseeking\\mdl_escontrol\\code\\escontrol_ert_rtw\\escontrol.c",
	stack: 16,
	stackTotal: 16};
	 this.metricsArray.fcn["escontrol_initialize"] = {file: "C:\\repos\\GitLab\\rtoptimisation-group\\extremumseeking\\mdl_escontrol\\code\\escontrol_ert_rtw\\escontrol.c",
	stack: 32,
	stackTotal: 48};
	 this.metricsArray.fcn["escontrol_step"] = {file: "C:\\repos\\GitLab\\rtoptimisation-group\\extremumseeking\\mdl_escontrol\\code\\escontrol_ert_rtw\\escontrol.c",
	stack: 48,
	stackTotal: 218};
	 this.metricsArray.fcn["escontrol_terminate"] = {file: "C:\\repos\\GitLab\\rtoptimisation-group\\extremumseeking\\mdl_escontrol\\code\\escontrol_ert_rtw\\escontrol.c",
	stack: 8,
	stackTotal: 8};
	 this.metricsArray.fcn["memset"] = {file: "C:\\Program Files\\MATLAB\\R2024a\\polyspace\\verifier\\cxx\\include\\include-libc\\string.h",
	stack: 0,
	stackTotal: 0};
	 this.metricsArray.fcn["sin"] = {file: "C:\\Program Files\\MATLAB\\R2024a\\polyspace\\verifier\\cxx\\include\\include-libc\\bits\\mathcalls.h",
	stack: 0,
	stackTotal: 0};
	 this.getMetrics = function(token) { 
		 var data;
		 data = this.metricsArray.var[token];
		 if (!data) {
			 data = this.metricsArray.fcn[token];
			 if (data) data.type = "fcn";
		 } else { 
			 data.type = "var";
		 }
	 return data; }; 
	 this.codeMetricsSummary = '<a href="javascript:void(0)" onclick="return postParentWindowMessage({message:\'gotoReportPage\', pageName:\'escontrol_metrics\'});">Global Memory: 240(bytes) Maximum Stack: 170(bytes)</a>';
	}
CodeMetrics.instance = new CodeMetrics();
