// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.220929.3

#pragma once
#ifndef WINRT_Microsoft_UI_Xaml_Input_2_H
#define WINRT_Microsoft_UI_Xaml_Input_2_H
#include "winrt/impl/Microsoft.UI.Xaml.1.h"
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Microsoft.UI.Xaml.Input.1.h"
WINRT_EXPORT namespace winrt::Microsoft::UI::Xaml::Input
{
    struct DoubleTappedEventHandler : winrt::Windows::Foundation::IUnknown
    {
        DoubleTappedEventHandler(std::nullptr_t = nullptr) noexcept {}
        DoubleTappedEventHandler(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IUnknown(ptr, take_ownership_from_abi) {}
        template <typename L> DoubleTappedEventHandler(L lambda);
        template <typename F> DoubleTappedEventHandler(F* function);
        template <typename O, typename M> DoubleTappedEventHandler(O* object, M method);
        template <typename O, typename M> DoubleTappedEventHandler(com_ptr<O>&& object, M method);
        template <typename O, typename M> DoubleTappedEventHandler(weak_ref<O>&& object, M method);
        auto operator()(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::Input::DoubleTappedRoutedEventArgs const& e) const;
    };
    struct HoldingEventHandler : winrt::Windows::Foundation::IUnknown
    {
        HoldingEventHandler(std::nullptr_t = nullptr) noexcept {}
        HoldingEventHandler(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IUnknown(ptr, take_ownership_from_abi) {}
        template <typename L> HoldingEventHandler(L lambda);
        template <typename F> HoldingEventHandler(F* function);
        template <typename O, typename M> HoldingEventHandler(O* object, M method);
        template <typename O, typename M> HoldingEventHandler(com_ptr<O>&& object, M method);
        template <typename O, typename M> HoldingEventHandler(weak_ref<O>&& object, M method);
        auto operator()(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::Input::HoldingRoutedEventArgs const& e) const;
    };
    struct KeyEventHandler : winrt::Windows::Foundation::IUnknown
    {
        KeyEventHandler(std::nullptr_t = nullptr) noexcept {}
        KeyEventHandler(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IUnknown(ptr, take_ownership_from_abi) {}
        template <typename L> KeyEventHandler(L lambda);
        template <typename F> KeyEventHandler(F* function);
        template <typename O, typename M> KeyEventHandler(O* object, M method);
        template <typename O, typename M> KeyEventHandler(com_ptr<O>&& object, M method);
        template <typename O, typename M> KeyEventHandler(weak_ref<O>&& object, M method);
        auto operator()(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::Input::KeyRoutedEventArgs const& e) const;
    };
    struct ManipulationCompletedEventHandler : winrt::Windows::Foundation::IUnknown
    {
        ManipulationCompletedEventHandler(std::nullptr_t = nullptr) noexcept {}
        ManipulationCompletedEventHandler(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IUnknown(ptr, take_ownership_from_abi) {}
        template <typename L> ManipulationCompletedEventHandler(L lambda);
        template <typename F> ManipulationCompletedEventHandler(F* function);
        template <typename O, typename M> ManipulationCompletedEventHandler(O* object, M method);
        template <typename O, typename M> ManipulationCompletedEventHandler(com_ptr<O>&& object, M method);
        template <typename O, typename M> ManipulationCompletedEventHandler(weak_ref<O>&& object, M method);
        auto operator()(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::Input::ManipulationCompletedRoutedEventArgs const& e) const;
    };
    struct ManipulationDeltaEventHandler : winrt::Windows::Foundation::IUnknown
    {
        ManipulationDeltaEventHandler(std::nullptr_t = nullptr) noexcept {}
        ManipulationDeltaEventHandler(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IUnknown(ptr, take_ownership_from_abi) {}
        template <typename L> ManipulationDeltaEventHandler(L lambda);
        template <typename F> ManipulationDeltaEventHandler(F* function);
        template <typename O, typename M> ManipulationDeltaEventHandler(O* object, M method);
        template <typename O, typename M> ManipulationDeltaEventHandler(com_ptr<O>&& object, M method);
        template <typename O, typename M> ManipulationDeltaEventHandler(weak_ref<O>&& object, M method);
        auto operator()(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::Input::ManipulationDeltaRoutedEventArgs const& e) const;
    };
    struct ManipulationInertiaStartingEventHandler : winrt::Windows::Foundation::IUnknown
    {
        ManipulationInertiaStartingEventHandler(std::nullptr_t = nullptr) noexcept {}
        ManipulationInertiaStartingEventHandler(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IUnknown(ptr, take_ownership_from_abi) {}
        template <typename L> ManipulationInertiaStartingEventHandler(L lambda);
        template <typename F> ManipulationInertiaStartingEventHandler(F* function);
        template <typename O, typename M> ManipulationInertiaStartingEventHandler(O* object, M method);
        template <typename O, typename M> ManipulationInertiaStartingEventHandler(com_ptr<O>&& object, M method);
        template <typename O, typename M> ManipulationInertiaStartingEventHandler(weak_ref<O>&& object, M method);
        auto operator()(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::Input::ManipulationInertiaStartingRoutedEventArgs const& e) const;
    };
    struct ManipulationStartedEventHandler : winrt::Windows::Foundation::IUnknown
    {
        ManipulationStartedEventHandler(std::nullptr_t = nullptr) noexcept {}
        ManipulationStartedEventHandler(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IUnknown(ptr, take_ownership_from_abi) {}
        template <typename L> ManipulationStartedEventHandler(L lambda);
        template <typename F> ManipulationStartedEventHandler(F* function);
        template <typename O, typename M> ManipulationStartedEventHandler(O* object, M method);
        template <typename O, typename M> ManipulationStartedEventHandler(com_ptr<O>&& object, M method);
        template <typename O, typename M> ManipulationStartedEventHandler(weak_ref<O>&& object, M method);
        auto operator()(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::Input::ManipulationStartedRoutedEventArgs const& e) const;
    };
    struct ManipulationStartingEventHandler : winrt::Windows::Foundation::IUnknown
    {
        ManipulationStartingEventHandler(std::nullptr_t = nullptr) noexcept {}
        ManipulationStartingEventHandler(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IUnknown(ptr, take_ownership_from_abi) {}
        template <typename L> ManipulationStartingEventHandler(L lambda);
        template <typename F> ManipulationStartingEventHandler(F* function);
        template <typename O, typename M> ManipulationStartingEventHandler(O* object, M method);
        template <typename O, typename M> ManipulationStartingEventHandler(com_ptr<O>&& object, M method);
        template <typename O, typename M> ManipulationStartingEventHandler(weak_ref<O>&& object, M method);
        auto operator()(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::Input::ManipulationStartingRoutedEventArgs const& e) const;
    };
    struct PointerEventHandler : winrt::Windows::Foundation::IUnknown
    {
        PointerEventHandler(std::nullptr_t = nullptr) noexcept {}
        PointerEventHandler(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IUnknown(ptr, take_ownership_from_abi) {}
        template <typename L> PointerEventHandler(L lambda);
        template <typename F> PointerEventHandler(F* function);
        template <typename O, typename M> PointerEventHandler(O* object, M method);
        template <typename O, typename M> PointerEventHandler(com_ptr<O>&& object, M method);
        template <typename O, typename M> PointerEventHandler(weak_ref<O>&& object, M method);
        auto operator()(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::Input::PointerRoutedEventArgs const& e) const;
    };
    struct RightTappedEventHandler : winrt::Windows::Foundation::IUnknown
    {
        RightTappedEventHandler(std::nullptr_t = nullptr) noexcept {}
        RightTappedEventHandler(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IUnknown(ptr, take_ownership_from_abi) {}
        template <typename L> RightTappedEventHandler(L lambda);
        template <typename F> RightTappedEventHandler(F* function);
        template <typename O, typename M> RightTappedEventHandler(O* object, M method);
        template <typename O, typename M> RightTappedEventHandler(com_ptr<O>&& object, M method);
        template <typename O, typename M> RightTappedEventHandler(weak_ref<O>&& object, M method);
        auto operator()(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::Input::RightTappedRoutedEventArgs const& e) const;
    };
    struct TappedEventHandler : winrt::Windows::Foundation::IUnknown
    {
        TappedEventHandler(std::nullptr_t = nullptr) noexcept {}
        TappedEventHandler(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IUnknown(ptr, take_ownership_from_abi) {}
        template <typename L> TappedEventHandler(L lambda);
        template <typename F> TappedEventHandler(F* function);
        template <typename O, typename M> TappedEventHandler(O* object, M method);
        template <typename O, typename M> TappedEventHandler(com_ptr<O>&& object, M method);
        template <typename O, typename M> TappedEventHandler(weak_ref<O>&& object, M method);
        auto operator()(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::Input::TappedRoutedEventArgs const& e) const;
    };
    struct __declspec(empty_bases) AccessKeyDisplayDismissedEventArgs : winrt::Microsoft::UI::Xaml::Input::IAccessKeyDisplayDismissedEventArgs
    {
        AccessKeyDisplayDismissedEventArgs(std::nullptr_t) noexcept {}
        AccessKeyDisplayDismissedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::UI::Xaml::Input::IAccessKeyDisplayDismissedEventArgs(ptr, take_ownership_from_abi) {}
        AccessKeyDisplayDismissedEventArgs();
    };
    struct __declspec(empty_bases) AccessKeyDisplayRequestedEventArgs : winrt::Microsoft::UI::Xaml::Input::IAccessKeyDisplayRequestedEventArgs
    {
        AccessKeyDisplayRequestedEventArgs(std::nullptr_t) noexcept {}
        AccessKeyDisplayRequestedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::UI::Xaml::Input::IAccessKeyDisplayRequestedEventArgs(ptr, take_ownership_from_abi) {}
        AccessKeyDisplayRequestedEventArgs();
    };
    struct __declspec(empty_bases) AccessKeyInvokedEventArgs : winrt::Microsoft::UI::Xaml::Input::IAccessKeyInvokedEventArgs
    {
        AccessKeyInvokedEventArgs(std::nullptr_t) noexcept {}
        AccessKeyInvokedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::UI::Xaml::Input::IAccessKeyInvokedEventArgs(ptr, take_ownership_from_abi) {}
        AccessKeyInvokedEventArgs();
    };
    struct __declspec(empty_bases) AccessKeyManager : winrt::Microsoft::UI::Xaml::Input::IAccessKeyManager
    {
        AccessKeyManager(std::nullptr_t) noexcept {}
        AccessKeyManager(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::UI::Xaml::Input::IAccessKeyManager(ptr, take_ownership_from_abi) {}
        [[nodiscard]] static auto IsDisplayModeEnabled();
        [[nodiscard]] static auto AreKeyTipsEnabled();
        static auto AreKeyTipsEnabled(bool value);
        static auto IsDisplayModeEnabledChanged(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Foundation::IInspectable, winrt::Windows::Foundation::IInspectable> const& handler);
        using IsDisplayModeEnabledChanged_revoker = impl::factory_event_revoker<winrt::Microsoft::UI::Xaml::Input::IAccessKeyManagerStatics, &impl::abi_t<winrt::Microsoft::UI::Xaml::Input::IAccessKeyManagerStatics>::remove_IsDisplayModeEnabledChanged>;
        [[nodiscard]] static auto IsDisplayModeEnabledChanged(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Foundation::IInspectable, winrt::Windows::Foundation::IInspectable> const& handler);
        static auto IsDisplayModeEnabledChanged(winrt::event_token const& token);
        static auto ExitDisplayMode();
    };
    struct __declspec(empty_bases) CanExecuteRequestedEventArgs : winrt::Microsoft::UI::Xaml::Input::ICanExecuteRequestedEventArgs
    {
        CanExecuteRequestedEventArgs(std::nullptr_t) noexcept {}
        CanExecuteRequestedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::UI::Xaml::Input::ICanExecuteRequestedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) CharacterReceivedRoutedEventArgs : winrt::Microsoft::UI::Xaml::Input::ICharacterReceivedRoutedEventArgs,
        impl::base<CharacterReceivedRoutedEventArgs, winrt::Microsoft::UI::Xaml::RoutedEventArgs>,
        impl::require<CharacterReceivedRoutedEventArgs, winrt::Microsoft::UI::Xaml::IRoutedEventArgs>
    {
        CharacterReceivedRoutedEventArgs(std::nullptr_t) noexcept {}
        CharacterReceivedRoutedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::UI::Xaml::Input::ICharacterReceivedRoutedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ContextRequestedEventArgs : winrt::Microsoft::UI::Xaml::Input::IContextRequestedEventArgs,
        impl::base<ContextRequestedEventArgs, winrt::Microsoft::UI::Xaml::RoutedEventArgs>,
        impl::require<ContextRequestedEventArgs, winrt::Microsoft::UI::Xaml::IRoutedEventArgs>
    {
        ContextRequestedEventArgs(std::nullptr_t) noexcept {}
        ContextRequestedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::UI::Xaml::Input::IContextRequestedEventArgs(ptr, take_ownership_from_abi) {}
        ContextRequestedEventArgs();
    };
    struct __declspec(empty_bases) DoubleTappedRoutedEventArgs : winrt::Microsoft::UI::Xaml::Input::IDoubleTappedRoutedEventArgs,
        impl::base<DoubleTappedRoutedEventArgs, winrt::Microsoft::UI::Xaml::RoutedEventArgs>,
        impl::require<DoubleTappedRoutedEventArgs, winrt::Microsoft::UI::Xaml::IRoutedEventArgs>
    {
        DoubleTappedRoutedEventArgs(std::nullptr_t) noexcept {}
        DoubleTappedRoutedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::UI::Xaml::Input::IDoubleTappedRoutedEventArgs(ptr, take_ownership_from_abi) {}
        DoubleTappedRoutedEventArgs();
    };
    struct __declspec(empty_bases) ExecuteRequestedEventArgs : winrt::Microsoft::UI::Xaml::Input::IExecuteRequestedEventArgs
    {
        ExecuteRequestedEventArgs(std::nullptr_t) noexcept {}
        ExecuteRequestedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::UI::Xaml::Input::IExecuteRequestedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) FindNextElementOptions : winrt::Microsoft::UI::Xaml::Input::IFindNextElementOptions
    {
        FindNextElementOptions(std::nullptr_t) noexcept {}
        FindNextElementOptions(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::UI::Xaml::Input::IFindNextElementOptions(ptr, take_ownership_from_abi) {}
        FindNextElementOptions();
    };
    struct __declspec(empty_bases) FocusManager : winrt::Microsoft::UI::Xaml::Input::IFocusManager
    {
        FocusManager(std::nullptr_t) noexcept {}
        FocusManager(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::UI::Xaml::Input::IFocusManager(ptr, take_ownership_from_abi) {}
        static auto GotFocus(winrt::Windows::Foundation::EventHandler<winrt::Microsoft::UI::Xaml::Input::FocusManagerGotFocusEventArgs> const& handler);
        using GotFocus_revoker = impl::factory_event_revoker<winrt::Microsoft::UI::Xaml::Input::IFocusManagerStatics, &impl::abi_t<winrt::Microsoft::UI::Xaml::Input::IFocusManagerStatics>::remove_GotFocus>;
        [[nodiscard]] static auto GotFocus(auto_revoke_t, winrt::Windows::Foundation::EventHandler<winrt::Microsoft::UI::Xaml::Input::FocusManagerGotFocusEventArgs> const& handler);
        static auto GotFocus(winrt::event_token const& token);
        static auto LostFocus(winrt::Windows::Foundation::EventHandler<winrt::Microsoft::UI::Xaml::Input::FocusManagerLostFocusEventArgs> const& handler);
        using LostFocus_revoker = impl::factory_event_revoker<winrt::Microsoft::UI::Xaml::Input::IFocusManagerStatics, &impl::abi_t<winrt::Microsoft::UI::Xaml::Input::IFocusManagerStatics>::remove_LostFocus>;
        [[nodiscard]] static auto LostFocus(auto_revoke_t, winrt::Windows::Foundation::EventHandler<winrt::Microsoft::UI::Xaml::Input::FocusManagerLostFocusEventArgs> const& handler);
        static auto LostFocus(winrt::event_token const& token);
        static auto GettingFocus(winrt::Windows::Foundation::EventHandler<winrt::Microsoft::UI::Xaml::Input::GettingFocusEventArgs> const& handler);
        using GettingFocus_revoker = impl::factory_event_revoker<winrt::Microsoft::UI::Xaml::Input::IFocusManagerStatics, &impl::abi_t<winrt::Microsoft::UI::Xaml::Input::IFocusManagerStatics>::remove_GettingFocus>;
        [[nodiscard]] static auto GettingFocus(auto_revoke_t, winrt::Windows::Foundation::EventHandler<winrt::Microsoft::UI::Xaml::Input::GettingFocusEventArgs> const& handler);
        static auto GettingFocus(winrt::event_token const& token);
        static auto LosingFocus(winrt::Windows::Foundation::EventHandler<winrt::Microsoft::UI::Xaml::Input::LosingFocusEventArgs> const& handler);
        using LosingFocus_revoker = impl::factory_event_revoker<winrt::Microsoft::UI::Xaml::Input::IFocusManagerStatics, &impl::abi_t<winrt::Microsoft::UI::Xaml::Input::IFocusManagerStatics>::remove_LosingFocus>;
        [[nodiscard]] static auto LosingFocus(auto_revoke_t, winrt::Windows::Foundation::EventHandler<winrt::Microsoft::UI::Xaml::Input::LosingFocusEventArgs> const& handler);
        static auto LosingFocus(winrt::event_token const& token);
        static auto TryFocusAsync(winrt::Microsoft::UI::Xaml::DependencyObject const& element, winrt::Microsoft::UI::Xaml::FocusState const& value);
        static auto TryMoveFocusAsync(winrt::Microsoft::UI::Xaml::Input::FocusNavigationDirection const& focusNavigationDirection);
        static auto TryMoveFocusAsync(winrt::Microsoft::UI::Xaml::Input::FocusNavigationDirection const& focusNavigationDirection, winrt::Microsoft::UI::Xaml::Input::FindNextElementOptions const& focusNavigationOptions);
        static auto TryMoveFocus(winrt::Microsoft::UI::Xaml::Input::FocusNavigationDirection const& focusNavigationDirection, winrt::Microsoft::UI::Xaml::Input::FindNextElementOptions const& focusNavigationOptions);
        static auto FindNextElement(winrt::Microsoft::UI::Xaml::Input::FocusNavigationDirection const& focusNavigationDirection);
        static auto FindFirstFocusableElement(winrt::Microsoft::UI::Xaml::DependencyObject const& searchScope);
        static auto FindLastFocusableElement(winrt::Microsoft::UI::Xaml::DependencyObject const& searchScope);
        static auto FindNextElement(winrt::Microsoft::UI::Xaml::Input::FocusNavigationDirection const& focusNavigationDirection, winrt::Microsoft::UI::Xaml::Input::FindNextElementOptions const& focusNavigationOptions);
        static auto FindNextFocusableElement(winrt::Microsoft::UI::Xaml::Input::FocusNavigationDirection const& focusNavigationDirection);
        static auto FindNextFocusableElement(winrt::Microsoft::UI::Xaml::Input::FocusNavigationDirection const& focusNavigationDirection, winrt::Windows::Foundation::Rect const& hintRect);
        static auto TryMoveFocus(winrt::Microsoft::UI::Xaml::Input::FocusNavigationDirection const& focusNavigationDirection);
        static auto GetFocusedElement();
        static auto GetFocusedElement(winrt::Microsoft::UI::Xaml::XamlRoot const& xamlRoot);
    };
    struct __declspec(empty_bases) FocusManagerGotFocusEventArgs : winrt::Microsoft::UI::Xaml::Input::IFocusManagerGotFocusEventArgs
    {
        FocusManagerGotFocusEventArgs(std::nullptr_t) noexcept {}
        FocusManagerGotFocusEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::UI::Xaml::Input::IFocusManagerGotFocusEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) FocusManagerLostFocusEventArgs : winrt::Microsoft::UI::Xaml::Input::IFocusManagerLostFocusEventArgs
    {
        FocusManagerLostFocusEventArgs(std::nullptr_t) noexcept {}
        FocusManagerLostFocusEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::UI::Xaml::Input::IFocusManagerLostFocusEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) FocusMovementResult : winrt::Microsoft::UI::Xaml::Input::IFocusMovementResult
    {
        FocusMovementResult(std::nullptr_t) noexcept {}
        FocusMovementResult(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::UI::Xaml::Input::IFocusMovementResult(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) GettingFocusEventArgs : winrt::Microsoft::UI::Xaml::Input::IGettingFocusEventArgs,
        impl::base<GettingFocusEventArgs, winrt::Microsoft::UI::Xaml::RoutedEventArgs>,
        impl::require<GettingFocusEventArgs, winrt::Microsoft::UI::Xaml::IRoutedEventArgs>
    {
        GettingFocusEventArgs(std::nullptr_t) noexcept {}
        GettingFocusEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::UI::Xaml::Input::IGettingFocusEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) HoldingRoutedEventArgs : winrt::Microsoft::UI::Xaml::Input::IHoldingRoutedEventArgs,
        impl::base<HoldingRoutedEventArgs, winrt::Microsoft::UI::Xaml::RoutedEventArgs>,
        impl::require<HoldingRoutedEventArgs, winrt::Microsoft::UI::Xaml::IRoutedEventArgs>
    {
        HoldingRoutedEventArgs(std::nullptr_t) noexcept {}
        HoldingRoutedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::UI::Xaml::Input::IHoldingRoutedEventArgs(ptr, take_ownership_from_abi) {}
        HoldingRoutedEventArgs();
    };
    struct __declspec(empty_bases) InertiaExpansionBehavior : winrt::Microsoft::UI::Xaml::Input::IInertiaExpansionBehavior
    {
        InertiaExpansionBehavior(std::nullptr_t) noexcept {}
        InertiaExpansionBehavior(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::UI::Xaml::Input::IInertiaExpansionBehavior(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) InertiaRotationBehavior : winrt::Microsoft::UI::Xaml::Input::IInertiaRotationBehavior
    {
        InertiaRotationBehavior(std::nullptr_t) noexcept {}
        InertiaRotationBehavior(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::UI::Xaml::Input::IInertiaRotationBehavior(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) InertiaTranslationBehavior : winrt::Microsoft::UI::Xaml::Input::IInertiaTranslationBehavior
    {
        InertiaTranslationBehavior(std::nullptr_t) noexcept {}
        InertiaTranslationBehavior(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::UI::Xaml::Input::IInertiaTranslationBehavior(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) InputScope : winrt::Microsoft::UI::Xaml::Input::IInputScope,
        impl::base<InputScope, winrt::Microsoft::UI::Xaml::DependencyObject>,
        impl::require<InputScope, winrt::Microsoft::UI::Xaml::IDependencyObject>
    {
        InputScope(std::nullptr_t) noexcept {}
        InputScope(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::UI::Xaml::Input::IInputScope(ptr, take_ownership_from_abi) {}
        InputScope();
    };
    struct __declspec(empty_bases) InputScopeName : winrt::Microsoft::UI::Xaml::Input::IInputScopeName,
        impl::base<InputScopeName, winrt::Microsoft::UI::Xaml::DependencyObject>,
        impl::require<InputScopeName, winrt::Microsoft::UI::Xaml::IDependencyObject>
    {
        InputScopeName(std::nullptr_t) noexcept {}
        InputScopeName(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::UI::Xaml::Input::IInputScopeName(ptr, take_ownership_from_abi) {}
        InputScopeName();
        explicit InputScopeName(winrt::Microsoft::UI::Xaml::Input::InputScopeNameValue const& nameValue);
    };
    struct __declspec(empty_bases) KeyRoutedEventArgs : winrt::Microsoft::UI::Xaml::Input::IKeyRoutedEventArgs,
        impl::base<KeyRoutedEventArgs, winrt::Microsoft::UI::Xaml::RoutedEventArgs>,
        impl::require<KeyRoutedEventArgs, winrt::Microsoft::UI::Xaml::IRoutedEventArgs>
    {
        KeyRoutedEventArgs(std::nullptr_t) noexcept {}
        KeyRoutedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::UI::Xaml::Input::IKeyRoutedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) KeyboardAccelerator : winrt::Microsoft::UI::Xaml::Input::IKeyboardAccelerator,
        impl::base<KeyboardAccelerator, winrt::Microsoft::UI::Xaml::DependencyObject>,
        impl::require<KeyboardAccelerator, winrt::Microsoft::UI::Xaml::IDependencyObject>
    {
        KeyboardAccelerator(std::nullptr_t) noexcept {}
        KeyboardAccelerator(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::UI::Xaml::Input::IKeyboardAccelerator(ptr, take_ownership_from_abi) {}
        KeyboardAccelerator();
        [[nodiscard]] static auto KeyProperty();
        [[nodiscard]] static auto ModifiersProperty();
        [[nodiscard]] static auto IsEnabledProperty();
        [[nodiscard]] static auto ScopeOwnerProperty();
    };
    struct __declspec(empty_bases) KeyboardAcceleratorInvokedEventArgs : winrt::Microsoft::UI::Xaml::Input::IKeyboardAcceleratorInvokedEventArgs
    {
        KeyboardAcceleratorInvokedEventArgs(std::nullptr_t) noexcept {}
        KeyboardAcceleratorInvokedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::UI::Xaml::Input::IKeyboardAcceleratorInvokedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) LosingFocusEventArgs : winrt::Microsoft::UI::Xaml::Input::ILosingFocusEventArgs,
        impl::base<LosingFocusEventArgs, winrt::Microsoft::UI::Xaml::RoutedEventArgs>,
        impl::require<LosingFocusEventArgs, winrt::Microsoft::UI::Xaml::IRoutedEventArgs>
    {
        LosingFocusEventArgs(std::nullptr_t) noexcept {}
        LosingFocusEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::UI::Xaml::Input::ILosingFocusEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ManipulationCompletedRoutedEventArgs : winrt::Microsoft::UI::Xaml::Input::IManipulationCompletedRoutedEventArgs,
        impl::base<ManipulationCompletedRoutedEventArgs, winrt::Microsoft::UI::Xaml::RoutedEventArgs>,
        impl::require<ManipulationCompletedRoutedEventArgs, winrt::Microsoft::UI::Xaml::IRoutedEventArgs>
    {
        ManipulationCompletedRoutedEventArgs(std::nullptr_t) noexcept {}
        ManipulationCompletedRoutedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::UI::Xaml::Input::IManipulationCompletedRoutedEventArgs(ptr, take_ownership_from_abi) {}
        ManipulationCompletedRoutedEventArgs();
    };
    struct __declspec(empty_bases) ManipulationDeltaRoutedEventArgs : winrt::Microsoft::UI::Xaml::Input::IManipulationDeltaRoutedEventArgs,
        impl::base<ManipulationDeltaRoutedEventArgs, winrt::Microsoft::UI::Xaml::RoutedEventArgs>,
        impl::require<ManipulationDeltaRoutedEventArgs, winrt::Microsoft::UI::Xaml::IRoutedEventArgs>
    {
        ManipulationDeltaRoutedEventArgs(std::nullptr_t) noexcept {}
        ManipulationDeltaRoutedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::UI::Xaml::Input::IManipulationDeltaRoutedEventArgs(ptr, take_ownership_from_abi) {}
        ManipulationDeltaRoutedEventArgs();
    };
    struct __declspec(empty_bases) ManipulationInertiaStartingRoutedEventArgs : winrt::Microsoft::UI::Xaml::Input::IManipulationInertiaStartingRoutedEventArgs,
        impl::base<ManipulationInertiaStartingRoutedEventArgs, winrt::Microsoft::UI::Xaml::RoutedEventArgs>,
        impl::require<ManipulationInertiaStartingRoutedEventArgs, winrt::Microsoft::UI::Xaml::IRoutedEventArgs>
    {
        ManipulationInertiaStartingRoutedEventArgs(std::nullptr_t) noexcept {}
        ManipulationInertiaStartingRoutedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::UI::Xaml::Input::IManipulationInertiaStartingRoutedEventArgs(ptr, take_ownership_from_abi) {}
        ManipulationInertiaStartingRoutedEventArgs();
    };
    struct __declspec(empty_bases) ManipulationPivot : winrt::Microsoft::UI::Xaml::Input::IManipulationPivot
    {
        ManipulationPivot(std::nullptr_t) noexcept {}
        ManipulationPivot(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::UI::Xaml::Input::IManipulationPivot(ptr, take_ownership_from_abi) {}
        ManipulationPivot();
        ManipulationPivot(winrt::Windows::Foundation::Point const& center, double radius);
    };
    struct __declspec(empty_bases) ManipulationStartedRoutedEventArgs : winrt::Microsoft::UI::Xaml::Input::IManipulationStartedRoutedEventArgs,
        impl::base<ManipulationStartedRoutedEventArgs, winrt::Microsoft::UI::Xaml::RoutedEventArgs>,
        impl::require<ManipulationStartedRoutedEventArgs, winrt::Microsoft::UI::Xaml::IRoutedEventArgs>
    {
        ManipulationStartedRoutedEventArgs(std::nullptr_t) noexcept {}
        ManipulationStartedRoutedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::UI::Xaml::Input::IManipulationStartedRoutedEventArgs(ptr, take_ownership_from_abi) {}
        ManipulationStartedRoutedEventArgs();
    };
    struct __declspec(empty_bases) ManipulationStartingRoutedEventArgs : winrt::Microsoft::UI::Xaml::Input::IManipulationStartingRoutedEventArgs,
        impl::base<ManipulationStartingRoutedEventArgs, winrt::Microsoft::UI::Xaml::RoutedEventArgs>,
        impl::require<ManipulationStartingRoutedEventArgs, winrt::Microsoft::UI::Xaml::IRoutedEventArgs>
    {
        ManipulationStartingRoutedEventArgs(std::nullptr_t) noexcept {}
        ManipulationStartingRoutedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::UI::Xaml::Input::IManipulationStartingRoutedEventArgs(ptr, take_ownership_from_abi) {}
        ManipulationStartingRoutedEventArgs();
    };
    struct __declspec(empty_bases) NoFocusCandidateFoundEventArgs : winrt::Microsoft::UI::Xaml::Input::INoFocusCandidateFoundEventArgs,
        impl::base<NoFocusCandidateFoundEventArgs, winrt::Microsoft::UI::Xaml::RoutedEventArgs>,
        impl::require<NoFocusCandidateFoundEventArgs, winrt::Microsoft::UI::Xaml::IRoutedEventArgs>
    {
        NoFocusCandidateFoundEventArgs(std::nullptr_t) noexcept {}
        NoFocusCandidateFoundEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::UI::Xaml::Input::INoFocusCandidateFoundEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) Pointer : winrt::Microsoft::UI::Xaml::Input::IPointer
    {
        Pointer(std::nullptr_t) noexcept {}
        Pointer(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::UI::Xaml::Input::IPointer(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) PointerRoutedEventArgs : winrt::Microsoft::UI::Xaml::Input::IPointerRoutedEventArgs,
        impl::base<PointerRoutedEventArgs, winrt::Microsoft::UI::Xaml::RoutedEventArgs>,
        impl::require<PointerRoutedEventArgs, winrt::Microsoft::UI::Xaml::IRoutedEventArgs>
    {
        PointerRoutedEventArgs(std::nullptr_t) noexcept {}
        PointerRoutedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::UI::Xaml::Input::IPointerRoutedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ProcessKeyboardAcceleratorEventArgs : winrt::Microsoft::UI::Xaml::Input::IProcessKeyboardAcceleratorEventArgs
    {
        ProcessKeyboardAcceleratorEventArgs(std::nullptr_t) noexcept {}
        ProcessKeyboardAcceleratorEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::UI::Xaml::Input::IProcessKeyboardAcceleratorEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) RightTappedRoutedEventArgs : winrt::Microsoft::UI::Xaml::Input::IRightTappedRoutedEventArgs,
        impl::base<RightTappedRoutedEventArgs, winrt::Microsoft::UI::Xaml::RoutedEventArgs>,
        impl::require<RightTappedRoutedEventArgs, winrt::Microsoft::UI::Xaml::IRoutedEventArgs>
    {
        RightTappedRoutedEventArgs(std::nullptr_t) noexcept {}
        RightTappedRoutedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::UI::Xaml::Input::IRightTappedRoutedEventArgs(ptr, take_ownership_from_abi) {}
        RightTappedRoutedEventArgs();
    };
    struct __declspec(empty_bases) StandardUICommand : winrt::Microsoft::UI::Xaml::Input::IStandardUICommand,
        impl::base<StandardUICommand, winrt::Microsoft::UI::Xaml::Input::XamlUICommand, winrt::Microsoft::UI::Xaml::DependencyObject>,
        impl::require<StandardUICommand, winrt::Microsoft::UI::Xaml::Input::IXamlUICommand, winrt::Microsoft::UI::Xaml::Input::ICommand, winrt::Microsoft::UI::Xaml::IDependencyObject>
    {
        StandardUICommand(std::nullptr_t) noexcept {}
        StandardUICommand(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::UI::Xaml::Input::IStandardUICommand(ptr, take_ownership_from_abi) {}
        StandardUICommand();
        explicit StandardUICommand(winrt::Microsoft::UI::Xaml::Input::StandardUICommandKind const& kind);
        [[nodiscard]] static auto KindProperty();
    };
    struct __declspec(empty_bases) TappedRoutedEventArgs : winrt::Microsoft::UI::Xaml::Input::ITappedRoutedEventArgs,
        impl::base<TappedRoutedEventArgs, winrt::Microsoft::UI::Xaml::RoutedEventArgs>,
        impl::require<TappedRoutedEventArgs, winrt::Microsoft::UI::Xaml::IRoutedEventArgs>
    {
        TappedRoutedEventArgs(std::nullptr_t) noexcept {}
        TappedRoutedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::UI::Xaml::Input::ITappedRoutedEventArgs(ptr, take_ownership_from_abi) {}
        TappedRoutedEventArgs();
    };
    struct __declspec(empty_bases) XamlUICommand : winrt::Microsoft::UI::Xaml::Input::IXamlUICommand,
        impl::base<XamlUICommand, winrt::Microsoft::UI::Xaml::DependencyObject>,
        impl::require<XamlUICommand, winrt::Microsoft::UI::Xaml::Input::ICommand, winrt::Microsoft::UI::Xaml::IDependencyObject>
    {
        XamlUICommand(std::nullptr_t) noexcept {}
        XamlUICommand(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::UI::Xaml::Input::IXamlUICommand(ptr, take_ownership_from_abi) {}
        XamlUICommand();
        [[nodiscard]] static auto LabelProperty();
        [[nodiscard]] static auto IconSourceProperty();
        [[nodiscard]] static auto KeyboardAcceleratorsProperty();
        [[nodiscard]] static auto AccessKeyProperty();
        [[nodiscard]] static auto DescriptionProperty();
        [[nodiscard]] static auto CommandProperty();
    };
}
#endif