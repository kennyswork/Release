/***********************************************************************
!!!!!! DO NOT MODIFY !!!!!!

GacGen.exe Resource.xml

This file is generated by Workflow compiler
https://github.com/vczh-libraries
***********************************************************************/

#include "Demo.h"

#if defined( _MSC_VER)
#pragma warning(push)
#pragma warning(disable:4250)
#elif defined(__GNUC__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wparentheses-equality"
#elif defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wparentheses-equality"
#endif

#define GLOBAL_SYMBOL ::vl_workflow_global::Demo::
#define GLOBAL_NAME ::vl_workflow_global::Demo::Instance().
#define GLOBAL_OBJ &::vl_workflow_global::Demo::Instance()
#define USERIMPL(...)

/***********************************************************************
Global Variables
***********************************************************************/

BEGIN_GLOBAL_STORAGE_CLASS(vl_workflow_global_Demo)
	vl_workflow_global::Demo instance;
	INITIALIZE_GLOBAL_STORAGE_CLASS
	FINALIZE_GLOBAL_STORAGE_CLASS
END_GLOBAL_STORAGE_CLASS(vl_workflow_global_Demo)

namespace vl_workflow_global
{
/***********************************************************************
Global Functions
***********************************************************************/

	Demo& Demo::Instance()
	{
		return Getvl_workflow_global_Demo().instance;
	}
}

/***********************************************************************
Class (::demo::MainWindowConstructor)
***********************************************************************/

namespace demo
{
	void MainWindowConstructor::__vwsn_initialize_instance_(::demo::MainWindow* __vwsn_this_, ::vl::presentation::GuiResourcePathResolver* __vwsn_resolver_)
	{
		(::vl::__vwsn::This(this)->__vwsn_precompile_0 = __vwsn_this_);
		(::vl::__vwsn::This(this)->__vwsn_precompile_31 = ::vl::__vwsn::This(::vl::__vwsn::This(this)->__vwsn_precompile_0)->GetBoundsComposition());
		{
			::vl::__vwsn::This(::vl::__vwsn::This(this)->__vwsn_precompile_31)->SetPreferredMinSize([&](){ ::vl::presentation::Size __vwsn_temp__; __vwsn_temp__.x = 480; __vwsn_temp__.y = 320; return __vwsn_temp__; }());
		}
		{
			::vl::__vwsn::This(::vl::__vwsn::This(this)->__vwsn_precompile_0)->SetClientSize([&](){ ::vl::presentation::Size __vwsn_temp__; __vwsn_temp__.x = 480; __vwsn_temp__.y = 320; return __vwsn_temp__; }());
		}
		{
			::vl::__vwsn::This(::vl::__vwsn::This(this)->__vwsn_precompile_0)->SetText(::vl::WString(L"Table", false));
		}
		(::vl::__vwsn::This(this)->__vwsn_precompile_1 = new ::vl::presentation::compositions::GuiTableComposition());
		{
			::vl::__vwsn::This(::vl::__vwsn::This(this)->__vwsn_precompile_1)->SetMinSizeLimitation(::vl::presentation::compositions::GuiGraphicsComposition::MinSizeLimitation::LimitToElementAndChildren);
		}
		{
			::vl::__vwsn::This(::vl::__vwsn::This(this)->__vwsn_precompile_1)->SetCellPadding(::vl::__vwsn::Parse<::vl::vint32_t>(::vl::WString(L"5", false)));
		}
		{
			::vl::__vwsn::This(::vl::__vwsn::This(this)->__vwsn_precompile_1)->SetAlignmentToParent([&](){ ::vl::presentation::Margin __vwsn_temp__; __vwsn_temp__.left = 5; __vwsn_temp__.top = 5; __vwsn_temp__.right = 5; __vwsn_temp__.bottom = 5; return __vwsn_temp__; }());
		}
		{
			::vl::__vwsn::This(::vl::__vwsn::This(this)->__vwsn_precompile_1)->SetRowsAndColumns(6, 3);
			::vl::__vwsn::This(::vl::__vwsn::This(this)->__vwsn_precompile_1)->SetRowOption(0, [&](){ ::vl::presentation::compositions::GuiCellOption __vwsn_temp__; __vwsn_temp__.composeType = ::vl::presentation::compositions::GuiCellOption::ComposeType::MinSize; return __vwsn_temp__; }());
			::vl::__vwsn::This(::vl::__vwsn::This(this)->__vwsn_precompile_1)->SetRowOption(1, [&](){ ::vl::presentation::compositions::GuiCellOption __vwsn_temp__; __vwsn_temp__.composeType = ::vl::presentation::compositions::GuiCellOption::ComposeType::Absolute; __vwsn_temp__.absolute = 20; return __vwsn_temp__; }());
			::vl::__vwsn::This(::vl::__vwsn::This(this)->__vwsn_precompile_1)->SetRowOption(2, [&](){ ::vl::presentation::compositions::GuiCellOption __vwsn_temp__; __vwsn_temp__.composeType = ::vl::presentation::compositions::GuiCellOption::ComposeType::MinSize; return __vwsn_temp__; }());
			::vl::__vwsn::This(::vl::__vwsn::This(this)->__vwsn_precompile_1)->SetRowOption(3, [&](){ ::vl::presentation::compositions::GuiCellOption __vwsn_temp__; __vwsn_temp__.composeType = ::vl::presentation::compositions::GuiCellOption::ComposeType::MinSize; return __vwsn_temp__; }());
			::vl::__vwsn::This(::vl::__vwsn::This(this)->__vwsn_precompile_1)->SetRowOption(4, [&](){ ::vl::presentation::compositions::GuiCellOption __vwsn_temp__; __vwsn_temp__.composeType = ::vl::presentation::compositions::GuiCellOption::ComposeType::Percentage; __vwsn_temp__.percentage = 1.0; return __vwsn_temp__; }());
			::vl::__vwsn::This(::vl::__vwsn::This(this)->__vwsn_precompile_1)->SetRowOption(5, [&](){ ::vl::presentation::compositions::GuiCellOption __vwsn_temp__; __vwsn_temp__.composeType = ::vl::presentation::compositions::GuiCellOption::ComposeType::MinSize; return __vwsn_temp__; }());
			::vl::__vwsn::This(::vl::__vwsn::This(this)->__vwsn_precompile_1)->SetColumnOption(0, [&](){ ::vl::presentation::compositions::GuiCellOption __vwsn_temp__; __vwsn_temp__.composeType = ::vl::presentation::compositions::GuiCellOption::ComposeType::MinSize; return __vwsn_temp__; }());
			::vl::__vwsn::This(::vl::__vwsn::This(this)->__vwsn_precompile_1)->SetColumnOption(1, [&](){ ::vl::presentation::compositions::GuiCellOption __vwsn_temp__; __vwsn_temp__.composeType = ::vl::presentation::compositions::GuiCellOption::ComposeType::Percentage; __vwsn_temp__.percentage = 1.0; return __vwsn_temp__; }());
			::vl::__vwsn::This(::vl::__vwsn::This(this)->__vwsn_precompile_1)->SetColumnOption(2, [&](){ ::vl::presentation::compositions::GuiCellOption __vwsn_temp__; __vwsn_temp__.composeType = ::vl::presentation::compositions::GuiCellOption::ComposeType::MinSize; return __vwsn_temp__; }());
		}
		(::vl::__vwsn::This(this)->__vwsn_precompile_2 = new ::vl::presentation::compositions::GuiCellComposition());
		{
			::vl::__vwsn::This(::vl::__vwsn::This(this)->__vwsn_precompile_2)->SetSite(0, 0, 1, 3);
		}
		(::vl::__vwsn::This(this)->__vwsn_precompile_3 = ::vl::Ptr<::vl::presentation::elements::GuiSolidLabelElement>(::vl::reflection::description::Element_Constructor<::vl::presentation::elements::GuiSolidLabelElement>()));
		{
			::vl::__vwsn::This(::vl::__vwsn::This(this)->__vwsn_precompile_3.Obj())->SetVerticalAlignment(::vl::presentation::Alignment::Center);
		}
		{
			::vl::__vwsn::This(::vl::__vwsn::This(this)->__vwsn_precompile_3.Obj())->SetHorizontalAlignment(::vl::presentation::Alignment::Center);
		}
		{
			::vl::__vwsn::This(::vl::__vwsn::This(this)->__vwsn_precompile_3.Obj())->SetFont([&](){ ::vl::presentation::FontProperties __vwsn_temp__; __vwsn_temp__.fontFamily = ::vl::WString(L"Lucida Calligraphy", false); __vwsn_temp__.size = 96; return __vwsn_temp__; }());
		}
		{
			::vl::__vwsn::This(::vl::__vwsn::This(this)->__vwsn_precompile_3.Obj())->SetText(::vl::WString(L"GacUI", false));
		}
		{
			::vl::__vwsn::This(::vl::__vwsn::This(this)->__vwsn_precompile_2)->SetOwnedElement(::vl::__vwsn::Ensure(::vl::Ptr<::vl::presentation::elements::IGuiGraphicsElement>(::vl::__vwsn::This(this)->__vwsn_precompile_3)));
		}
		{
			::vl::__vwsn::This(::vl::__vwsn::This(this)->__vwsn_precompile_1)->AddChild(::vl::__vwsn::Ensure(static_cast<::vl::presentation::compositions::GuiGraphicsComposition*>(::vl::__vwsn::This(this)->__vwsn_precompile_2)));
		}
		(::vl::__vwsn::This(this)->__vwsn_precompile_4 = new ::vl::presentation::compositions::GuiCellComposition());
		{
			::vl::__vwsn::This(::vl::__vwsn::This(this)->__vwsn_precompile_4)->SetSite(2, 0, 1, 1);
		}
		{
			auto __vwsn_controlStyle_ = ::vl::__vwsn::This(::vl::presentation::theme::GetCurrentTheme())->CreateLabelStyle();
			(::vl::__vwsn::This(this)->__vwsn_precompile_5 = new ::vl::presentation::controls::GuiLabel(__vwsn_controlStyle_));
		}
		{
			::vl::__vwsn::This(::vl::__vwsn::This(this)->__vwsn_precompile_5)->SetText(::vl::WString(L"User Name:", false));
		}
		{
			::vl::__vwsn::This(::vl::__vwsn::This(this)->__vwsn_precompile_4)->AddChild(::vl::__vwsn::Ensure(static_cast<::vl::presentation::compositions::GuiGraphicsComposition*>(::vl::__vwsn::This(::vl::__vwsn::This(this)->__vwsn_precompile_5)->GetBoundsComposition())));
		}
		{
			::vl::__vwsn::This(::vl::__vwsn::This(this)->__vwsn_precompile_1)->AddChild(::vl::__vwsn::Ensure(static_cast<::vl::presentation::compositions::GuiGraphicsComposition*>(::vl::__vwsn::This(this)->__vwsn_precompile_4)));
		}
		(::vl::__vwsn::This(this)->__vwsn_precompile_6 = new ::vl::presentation::compositions::GuiCellComposition());
		{
			::vl::__vwsn::This(::vl::__vwsn::This(this)->__vwsn_precompile_6)->SetSite(2, 1, 1, 1);
		}
		{
			auto __vwsn_controlStyle_ = ::vl::__vwsn::This(::vl::presentation::theme::GetCurrentTheme())->CreateTextBoxStyle();
			(::vl::__vwsn::This(this)->__vwsn_precompile_7 = new ::vl::presentation::controls::GuiSinglelineTextBox(__vwsn_controlStyle_));
		}
		(::vl::__vwsn::This(this)->__vwsn_precompile_8 = ::vl::__vwsn::This(::vl::__vwsn::This(this)->__vwsn_precompile_7)->GetBoundsComposition());
		{
			::vl::__vwsn::This(::vl::__vwsn::This(this)->__vwsn_precompile_8)->SetAlignmentToParent([&](){ ::vl::presentation::Margin __vwsn_temp__; __vwsn_temp__.left = 0; __vwsn_temp__.top = 0; __vwsn_temp__.right = 0; __vwsn_temp__.bottom = 0; return __vwsn_temp__; }());
		}
		{
			::vl::__vwsn::This(::vl::__vwsn::This(this)->__vwsn_precompile_6)->AddChild(::vl::__vwsn::Ensure(static_cast<::vl::presentation::compositions::GuiGraphicsComposition*>(::vl::__vwsn::This(::vl::__vwsn::This(this)->__vwsn_precompile_7)->GetBoundsComposition())));
		}
		{
			::vl::__vwsn::This(::vl::__vwsn::This(this)->__vwsn_precompile_1)->AddChild(::vl::__vwsn::Ensure(static_cast<::vl::presentation::compositions::GuiGraphicsComposition*>(::vl::__vwsn::This(this)->__vwsn_precompile_6)));
		}
		(::vl::__vwsn::This(this)->__vwsn_precompile_9 = new ::vl::presentation::compositions::GuiCellComposition());
		{
			::vl::__vwsn::This(::vl::__vwsn::This(this)->__vwsn_precompile_9)->SetSite(2, 2, 1, 1);
		}
		{
			auto __vwsn_controlStyle_ = ::vl::__vwsn::This(::vl::presentation::theme::GetCurrentTheme())->CreateButtonStyle();
			(::vl::__vwsn::This(this)->__vwsn_precompile_10 = new ::vl::presentation::controls::GuiButton(__vwsn_controlStyle_));
		}
		(::vl::__vwsn::This(this)->__vwsn_precompile_11 = ::vl::__vwsn::This(::vl::__vwsn::This(this)->__vwsn_precompile_10)->GetBoundsComposition());
		{
			::vl::__vwsn::This(::vl::__vwsn::This(this)->__vwsn_precompile_11)->SetAlignmentToParent([&](){ ::vl::presentation::Margin __vwsn_temp__; __vwsn_temp__.left = 0; __vwsn_temp__.top = 0; __vwsn_temp__.right = 0; __vwsn_temp__.bottom = 0; return __vwsn_temp__; }());
		}
		{
			::vl::__vwsn::This(::vl::__vwsn::This(this)->__vwsn_precompile_10)->SetText(::vl::WString(L"Forget User Name ...", false));
		}
		{
			::vl::__vwsn::This(::vl::__vwsn::This(this)->__vwsn_precompile_9)->AddChild(::vl::__vwsn::Ensure(static_cast<::vl::presentation::compositions::GuiGraphicsComposition*>(::vl::__vwsn::This(::vl::__vwsn::This(this)->__vwsn_precompile_10)->GetBoundsComposition())));
		}
		{
			::vl::__vwsn::This(::vl::__vwsn::This(this)->__vwsn_precompile_1)->AddChild(::vl::__vwsn::Ensure(static_cast<::vl::presentation::compositions::GuiGraphicsComposition*>(::vl::__vwsn::This(this)->__vwsn_precompile_9)));
		}
		(::vl::__vwsn::This(this)->__vwsn_precompile_12 = new ::vl::presentation::compositions::GuiCellComposition());
		{
			::vl::__vwsn::This(::vl::__vwsn::This(this)->__vwsn_precompile_12)->SetSite(3, 0, 1, 1);
		}
		{
			auto __vwsn_controlStyle_ = ::vl::__vwsn::This(::vl::presentation::theme::GetCurrentTheme())->CreateLabelStyle();
			(::vl::__vwsn::This(this)->__vwsn_precompile_13 = new ::vl::presentation::controls::GuiLabel(__vwsn_controlStyle_));
		}
		{
			::vl::__vwsn::This(::vl::__vwsn::This(this)->__vwsn_precompile_13)->SetText(::vl::WString(L"Password:", false));
		}
		{
			::vl::__vwsn::This(::vl::__vwsn::This(this)->__vwsn_precompile_12)->AddChild(::vl::__vwsn::Ensure(static_cast<::vl::presentation::compositions::GuiGraphicsComposition*>(::vl::__vwsn::This(::vl::__vwsn::This(this)->__vwsn_precompile_13)->GetBoundsComposition())));
		}
		{
			::vl::__vwsn::This(::vl::__vwsn::This(this)->__vwsn_precompile_1)->AddChild(::vl::__vwsn::Ensure(static_cast<::vl::presentation::compositions::GuiGraphicsComposition*>(::vl::__vwsn::This(this)->__vwsn_precompile_12)));
		}
		(::vl::__vwsn::This(this)->__vwsn_precompile_14 = new ::vl::presentation::compositions::GuiCellComposition());
		{
			::vl::__vwsn::This(::vl::__vwsn::This(this)->__vwsn_precompile_14)->SetSite(3, 1, 1, 1);
		}
		{
			auto __vwsn_controlStyle_ = ::vl::__vwsn::This(::vl::presentation::theme::GetCurrentTheme())->CreateTextBoxStyle();
			(::vl::__vwsn::This(this)->__vwsn_precompile_15 = new ::vl::presentation::controls::GuiSinglelineTextBox(__vwsn_controlStyle_));
		}
		{
			::vl::__vwsn::This(::vl::__vwsn::This(this)->__vwsn_precompile_15)->SetPasswordChar(::vl::__vwsn::Parse<wchar_t>(::vl::WString(L"*", false)));
		}
		(::vl::__vwsn::This(this)->__vwsn_precompile_16 = ::vl::__vwsn::This(::vl::__vwsn::This(this)->__vwsn_precompile_15)->GetBoundsComposition());
		{
			::vl::__vwsn::This(::vl::__vwsn::This(this)->__vwsn_precompile_16)->SetAlignmentToParent([&](){ ::vl::presentation::Margin __vwsn_temp__; __vwsn_temp__.left = 0; __vwsn_temp__.top = 0; __vwsn_temp__.right = 0; __vwsn_temp__.bottom = 0; return __vwsn_temp__; }());
		}
		{
			::vl::__vwsn::This(::vl::__vwsn::This(this)->__vwsn_precompile_14)->AddChild(::vl::__vwsn::Ensure(static_cast<::vl::presentation::compositions::GuiGraphicsComposition*>(::vl::__vwsn::This(::vl::__vwsn::This(this)->__vwsn_precompile_15)->GetBoundsComposition())));
		}
		{
			::vl::__vwsn::This(::vl::__vwsn::This(this)->__vwsn_precompile_1)->AddChild(::vl::__vwsn::Ensure(static_cast<::vl::presentation::compositions::GuiGraphicsComposition*>(::vl::__vwsn::This(this)->__vwsn_precompile_14)));
		}
		(::vl::__vwsn::This(this)->__vwsn_precompile_17 = new ::vl::presentation::compositions::GuiCellComposition());
		{
			::vl::__vwsn::This(::vl::__vwsn::This(this)->__vwsn_precompile_17)->SetSite(3, 2, 1, 1);
		}
		{
			auto __vwsn_controlStyle_ = ::vl::__vwsn::This(::vl::presentation::theme::GetCurrentTheme())->CreateButtonStyle();
			(::vl::__vwsn::This(this)->__vwsn_precompile_18 = new ::vl::presentation::controls::GuiButton(__vwsn_controlStyle_));
		}
		(::vl::__vwsn::This(this)->__vwsn_precompile_19 = ::vl::__vwsn::This(::vl::__vwsn::This(this)->__vwsn_precompile_18)->GetBoundsComposition());
		{
			::vl::__vwsn::This(::vl::__vwsn::This(this)->__vwsn_precompile_19)->SetAlignmentToParent([&](){ ::vl::presentation::Margin __vwsn_temp__; __vwsn_temp__.left = 0; __vwsn_temp__.top = 0; __vwsn_temp__.right = 0; __vwsn_temp__.bottom = 0; return __vwsn_temp__; }());
		}
		{
			::vl::__vwsn::This(::vl::__vwsn::This(this)->__vwsn_precompile_18)->SetText(::vl::WString(L"Forget Password ...", false));
		}
		{
			::vl::__vwsn::This(::vl::__vwsn::This(this)->__vwsn_precompile_17)->AddChild(::vl::__vwsn::Ensure(static_cast<::vl::presentation::compositions::GuiGraphicsComposition*>(::vl::__vwsn::This(::vl::__vwsn::This(this)->__vwsn_precompile_18)->GetBoundsComposition())));
		}
		{
			::vl::__vwsn::This(::vl::__vwsn::This(this)->__vwsn_precompile_1)->AddChild(::vl::__vwsn::Ensure(static_cast<::vl::presentation::compositions::GuiGraphicsComposition*>(::vl::__vwsn::This(this)->__vwsn_precompile_17)));
		}
		(::vl::__vwsn::This(this)->__vwsn_precompile_20 = new ::vl::presentation::compositions::GuiCellComposition());
		{
			::vl::__vwsn::This(::vl::__vwsn::This(this)->__vwsn_precompile_20)->SetSite(5, 0, 1, 3);
		}
		(::vl::__vwsn::This(this)->__vwsn_precompile_21 = new ::vl::presentation::compositions::GuiTableComposition());
		{
			::vl::__vwsn::This(::vl::__vwsn::This(this)->__vwsn_precompile_21)->SetMinSizeLimitation(::vl::presentation::compositions::GuiGraphicsComposition::MinSizeLimitation::LimitToElementAndChildren);
		}
		{
			::vl::__vwsn::This(::vl::__vwsn::This(this)->__vwsn_precompile_21)->SetAlignmentToParent([&](){ ::vl::presentation::Margin __vwsn_temp__; __vwsn_temp__.left = 0; __vwsn_temp__.top = 0; __vwsn_temp__.right = 0; __vwsn_temp__.bottom = 0; return __vwsn_temp__; }());
		}
		{
			::vl::__vwsn::This(::vl::__vwsn::This(this)->__vwsn_precompile_21)->SetRowsAndColumns(1, 4);
			::vl::__vwsn::This(::vl::__vwsn::This(this)->__vwsn_precompile_21)->SetRowOption(0, [&](){ ::vl::presentation::compositions::GuiCellOption __vwsn_temp__; __vwsn_temp__.composeType = ::vl::presentation::compositions::GuiCellOption::ComposeType::MinSize; return __vwsn_temp__; }());
			::vl::__vwsn::This(::vl::__vwsn::This(this)->__vwsn_precompile_21)->SetColumnOption(0, [&](){ ::vl::presentation::compositions::GuiCellOption __vwsn_temp__; __vwsn_temp__.composeType = ::vl::presentation::compositions::GuiCellOption::ComposeType::MinSize; return __vwsn_temp__; }());
			::vl::__vwsn::This(::vl::__vwsn::This(this)->__vwsn_precompile_21)->SetColumnOption(1, [&](){ ::vl::presentation::compositions::GuiCellOption __vwsn_temp__; __vwsn_temp__.composeType = ::vl::presentation::compositions::GuiCellOption::ComposeType::MinSize; return __vwsn_temp__; }());
			::vl::__vwsn::This(::vl::__vwsn::This(this)->__vwsn_precompile_21)->SetColumnOption(2, [&](){ ::vl::presentation::compositions::GuiCellOption __vwsn_temp__; __vwsn_temp__.composeType = ::vl::presentation::compositions::GuiCellOption::ComposeType::Percentage; __vwsn_temp__.percentage = 1.0; return __vwsn_temp__; }());
			::vl::__vwsn::This(::vl::__vwsn::This(this)->__vwsn_precompile_21)->SetColumnOption(3, [&](){ ::vl::presentation::compositions::GuiCellOption __vwsn_temp__; __vwsn_temp__.composeType = ::vl::presentation::compositions::GuiCellOption::ComposeType::MinSize; return __vwsn_temp__; }());
		}
		(::vl::__vwsn::This(this)->__vwsn_precompile_22 = new ::vl::presentation::compositions::GuiCellComposition());
		{
			::vl::__vwsn::This(::vl::__vwsn::This(this)->__vwsn_precompile_22)->SetInternalMargin([&](){ ::vl::presentation::Margin __vwsn_temp__; __vwsn_temp__.right = 10; return __vwsn_temp__; }());
		}
		{
			::vl::__vwsn::This(::vl::__vwsn::This(this)->__vwsn_precompile_22)->SetSite(0, 0, 1, 1);
		}
		{
			auto __vwsn_controlStyle_ = ::vl::__vwsn::This(::vl::presentation::theme::GetCurrentTheme())->CreateButtonStyle();
			(::vl::__vwsn::This(this)->__vwsn_precompile_23 = new ::vl::presentation::controls::GuiButton(__vwsn_controlStyle_));
		}
		(::vl::__vwsn::This(this)->__vwsn_precompile_24 = ::vl::__vwsn::This(::vl::__vwsn::This(this)->__vwsn_precompile_23)->GetBoundsComposition());
		{
			::vl::__vwsn::This(::vl::__vwsn::This(this)->__vwsn_precompile_24)->SetPreferredMinSize([&](){ ::vl::presentation::Size __vwsn_temp__; __vwsn_temp__.x = 100; __vwsn_temp__.y = 30; return __vwsn_temp__; }());
		}
		{
			::vl::__vwsn::This(::vl::__vwsn::This(this)->__vwsn_precompile_23)->SetText(::vl::WString(L"Sign Up ...", false));
		}
		{
			::vl::__vwsn::This(::vl::__vwsn::This(this)->__vwsn_precompile_22)->AddChild(::vl::__vwsn::Ensure(static_cast<::vl::presentation::compositions::GuiGraphicsComposition*>(::vl::__vwsn::This(::vl::__vwsn::This(this)->__vwsn_precompile_23)->GetBoundsComposition())));
		}
		{
			::vl::__vwsn::This(::vl::__vwsn::This(this)->__vwsn_precompile_21)->AddChild(::vl::__vwsn::Ensure(static_cast<::vl::presentation::compositions::GuiGraphicsComposition*>(::vl::__vwsn::This(this)->__vwsn_precompile_22)));
		}
		(::vl::__vwsn::This(this)->__vwsn_precompile_25 = new ::vl::presentation::compositions::GuiCellComposition());
		{
			::vl::__vwsn::This(::vl::__vwsn::This(this)->__vwsn_precompile_25)->SetSite(0, 1, 1, 1);
		}
		{
			auto __vwsn_controlStyle_ = ::vl::__vwsn::This(::vl::presentation::theme::GetCurrentTheme())->CreateButtonStyle();
			(::vl::__vwsn::This(this)->__vwsn_precompile_26 = new ::vl::presentation::controls::GuiButton(__vwsn_controlStyle_));
		}
		(::vl::__vwsn::This(this)->__vwsn_precompile_27 = ::vl::__vwsn::This(::vl::__vwsn::This(this)->__vwsn_precompile_26)->GetBoundsComposition());
		{
			::vl::__vwsn::This(::vl::__vwsn::This(this)->__vwsn_precompile_27)->SetPreferredMinSize([&](){ ::vl::presentation::Size __vwsn_temp__; __vwsn_temp__.x = 100; __vwsn_temp__.y = 30; return __vwsn_temp__; }());
		}
		{
			::vl::__vwsn::This(::vl::__vwsn::This(this)->__vwsn_precompile_26)->SetText(::vl::WString(L"Log In", false));
		}
		{
			::vl::__vwsn::This(::vl::__vwsn::This(this)->__vwsn_precompile_25)->AddChild(::vl::__vwsn::Ensure(static_cast<::vl::presentation::compositions::GuiGraphicsComposition*>(::vl::__vwsn::This(::vl::__vwsn::This(this)->__vwsn_precompile_26)->GetBoundsComposition())));
		}
		{
			::vl::__vwsn::This(::vl::__vwsn::This(this)->__vwsn_precompile_21)->AddChild(::vl::__vwsn::Ensure(static_cast<::vl::presentation::compositions::GuiGraphicsComposition*>(::vl::__vwsn::This(this)->__vwsn_precompile_25)));
		}
		(::vl::__vwsn::This(this)->__vwsn_precompile_28 = new ::vl::presentation::compositions::GuiCellComposition());
		{
			::vl::__vwsn::This(::vl::__vwsn::This(this)->__vwsn_precompile_28)->SetSite(0, 3, 1, 1);
		}
		{
			auto __vwsn_controlStyle_ = ::vl::__vwsn::This(::vl::presentation::theme::GetCurrentTheme())->CreateButtonStyle();
			(::vl::__vwsn::This(this)->__vwsn_precompile_29 = new ::vl::presentation::controls::GuiButton(__vwsn_controlStyle_));
		}
		(::vl::__vwsn::This(this)->__vwsn_precompile_30 = ::vl::__vwsn::This(::vl::__vwsn::This(this)->__vwsn_precompile_29)->GetBoundsComposition());
		{
			::vl::__vwsn::This(::vl::__vwsn::This(this)->__vwsn_precompile_30)->SetPreferredMinSize([&](){ ::vl::presentation::Size __vwsn_temp__; __vwsn_temp__.x = 100; __vwsn_temp__.y = 30; return __vwsn_temp__; }());
		}
		{
			::vl::__vwsn::This(::vl::__vwsn::This(this)->__vwsn_precompile_29)->SetText(::vl::WString(L"Close", false));
		}
		{
			::vl::__vwsn::This(::vl::__vwsn::This(this)->__vwsn_precompile_28)->AddChild(::vl::__vwsn::Ensure(static_cast<::vl::presentation::compositions::GuiGraphicsComposition*>(::vl::__vwsn::This(::vl::__vwsn::This(this)->__vwsn_precompile_29)->GetBoundsComposition())));
		}
		{
			::vl::__vwsn::This(::vl::__vwsn::This(this)->__vwsn_precompile_21)->AddChild(::vl::__vwsn::Ensure(static_cast<::vl::presentation::compositions::GuiGraphicsComposition*>(::vl::__vwsn::This(this)->__vwsn_precompile_28)));
		}
		{
			::vl::__vwsn::This(::vl::__vwsn::This(this)->__vwsn_precompile_20)->AddChild(::vl::__vwsn::Ensure(static_cast<::vl::presentation::compositions::GuiGraphicsComposition*>(::vl::__vwsn::This(this)->__vwsn_precompile_21)));
		}
		{
			::vl::__vwsn::This(::vl::__vwsn::This(this)->__vwsn_precompile_1)->AddChild(::vl::__vwsn::Ensure(static_cast<::vl::presentation::compositions::GuiGraphicsComposition*>(::vl::__vwsn::This(this)->__vwsn_precompile_20)));
		}
		{
			::vl::__vwsn::This(::vl::__vwsn::This(::vl::__vwsn::This(this)->__vwsn_precompile_0)->GetContainerComposition())->AddChild(::vl::__vwsn::Ensure(static_cast<::vl::presentation::compositions::GuiGraphicsComposition*>(::vl::__vwsn::This(this)->__vwsn_precompile_1)));
		}
	}

	MainWindowConstructor::MainWindowConstructor()
	{
	}

/***********************************************************************
Class (::demo::MainWindow)
***********************************************************************/

	MainWindow::MainWindow()
		: ::vl::presentation::controls::GuiWindow(::vl::__vwsn::This(::vl::presentation::theme::GetCurrentTheme())->CreateWindowStyle())
	{
		auto __vwsn_resource_ = ::vl::__vwsn::This(::vl::presentation::GetResourceManager())->GetResourceFromClassName(::vl::WString(L"demo::MainWindow", false));
		auto __vwsn_resolver_ = ::vl::Ptr<::vl::presentation::GuiResourcePathResolver>(new ::vl::presentation::GuiResourcePathResolver(__vwsn_resource_, ::vl::__vwsn::This(__vwsn_resource_.Obj())->GetWorkingDirectory()));
		::vl::__vwsn::This(this)->__vwsn_initialize_instance_(this, ::vl::__vwsn::Ensure(static_cast<::vl::presentation::GuiResourcePathResolver*>(__vwsn_resolver_.Obj())));
	}

	MainWindow::~MainWindow()
	{
		::vl::__vwsn::This(this)->ClearSubscriptions();
	}

}
#undef GLOBAL_SYMBOL
#undef GLOBAL_NAME
#undef GLOBAL_OBJ
#undef USERIMPL

/***********************************************************************
Reflection
***********************************************************************/

namespace vl
{
	namespace reflection
	{
		namespace description
		{
#ifndef VCZH_DEBUG_NO_REFLECTION
			IMPL_CPP_TYPE_INFO(::demo::MainWindow)
			IMPL_CPP_TYPE_INFO(::demo::MainWindowConstructor)

#define _ ,
			BEGIN_CLASS_MEMBER(::demo::MainWindow)
			END_CLASS_MEMBER(::demo::MainWindow)

			BEGIN_CLASS_MEMBER(::demo::MainWindowConstructor)
				CLASS_MEMBER_METHOD(__vwsn_initialize_instance_, { L"__vwsn_this_" _ L"__vwsn_resolver_" })
				CLASS_MEMBER_FIELD(__vwsn_precompile_0)
				CLASS_MEMBER_FIELD(__vwsn_precompile_1)
				CLASS_MEMBER_FIELD(__vwsn_precompile_10)
				CLASS_MEMBER_FIELD(__vwsn_precompile_11)
				CLASS_MEMBER_FIELD(__vwsn_precompile_12)
				CLASS_MEMBER_FIELD(__vwsn_precompile_13)
				CLASS_MEMBER_FIELD(__vwsn_precompile_14)
				CLASS_MEMBER_FIELD(__vwsn_precompile_15)
				CLASS_MEMBER_FIELD(__vwsn_precompile_16)
				CLASS_MEMBER_FIELD(__vwsn_precompile_17)
				CLASS_MEMBER_FIELD(__vwsn_precompile_18)
				CLASS_MEMBER_FIELD(__vwsn_precompile_19)
				CLASS_MEMBER_FIELD(__vwsn_precompile_2)
				CLASS_MEMBER_FIELD(__vwsn_precompile_20)
				CLASS_MEMBER_FIELD(__vwsn_precompile_21)
				CLASS_MEMBER_FIELD(__vwsn_precompile_22)
				CLASS_MEMBER_FIELD(__vwsn_precompile_23)
				CLASS_MEMBER_FIELD(__vwsn_precompile_24)
				CLASS_MEMBER_FIELD(__vwsn_precompile_25)
				CLASS_MEMBER_FIELD(__vwsn_precompile_26)
				CLASS_MEMBER_FIELD(__vwsn_precompile_27)
				CLASS_MEMBER_FIELD(__vwsn_precompile_28)
				CLASS_MEMBER_FIELD(__vwsn_precompile_29)
				CLASS_MEMBER_FIELD(__vwsn_precompile_3)
				CLASS_MEMBER_FIELD(__vwsn_precompile_30)
				CLASS_MEMBER_FIELD(__vwsn_precompile_31)
				CLASS_MEMBER_FIELD(__vwsn_precompile_4)
				CLASS_MEMBER_FIELD(__vwsn_precompile_5)
				CLASS_MEMBER_FIELD(__vwsn_precompile_6)
				CLASS_MEMBER_FIELD(__vwsn_precompile_7)
				CLASS_MEMBER_FIELD(__vwsn_precompile_8)
				CLASS_MEMBER_FIELD(__vwsn_precompile_9)
			END_CLASS_MEMBER(::demo::MainWindowConstructor)

#undef _
			class DemoTypeLoader : public Object, public ITypeLoader
			{
			public:
				void Load(ITypeManager* manager)
				{
					ADD_TYPE_INFO(::demo::MainWindow)
					ADD_TYPE_INFO(::demo::MainWindowConstructor)
				}

				void Unload(ITypeManager* manager)
				{
				}
			};
#endif

			bool LoadDemoTypes()
			{
#ifndef VCZH_DEBUG_NO_REFLECTION
				if (auto manager = GetGlobalTypeManager())
				{
					return manager->AddTypeLoader(MakePtr<DemoTypeLoader>());
				}
#endif
				return false;
			}
		}
	}
}

#if defined( _MSC_VER)
#pragma warning(pop)
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#elif defined(__clang__)
#pragma clang diagnostic pop
#endif
