#ifndef _LTPSERVICE_H_
#define _LTPSERVICE_H_
#pragma once
#include "CirService.h"
#include "LTML.h"
#include <string>

namespace HIT_IR_LTP{
	class LTPService 
	{
	private:
		CirService ls;
	public:
		LTPService(const std::string& authorization)
			:ls(authorization){};
		~LTPService(void);
	public:
		bool Analyze(const std::string& option, const std::string& analyzeString, LTML& ltml_out);
		bool Analyze(const std::string& option, const LTML& ltml_in, LTML& ltml_out);
	public:
		bool IsAuthorized()
		{
			return ls.IsAuthorized();
		}
		bool SetEncoding(const std::string& encodingType)
		{
			return ls.SetEncoding(encodingType);
		}
		void SetAnalysisOptions(const std::string& op)
		{
			return ls.SetAnalysisOptions( op);
		}

	};
}

#endif
