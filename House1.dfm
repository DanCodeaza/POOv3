object HouseForm1: THouseForm1
  Left = 0
  Top = 0
  Caption = 'HouseForm1'
  ClientHeight = 651
  ClientWidth = 1088
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  OnResize = FormResize
  TextHeight = 15
  object Previous: TButton
    Left = 264
    Top = 456
    Width = 75
    Height = 25
    Caption = 'Back'
    TabOrder = 0
    OnClick = PreviousClick
  end
  object Next: TButton
    Left = 345
    Top = 456
    Width = 75
    Height = 25
    Caption = 'Next'
    TabOrder = 1
    OnClick = NextClick
  end
  object Exit: TButton
    Left = 426
    Top = 456
    Width = 75
    Height = 25
    Caption = 'Exit'
    TabOrder = 2
    OnClick = ExitClick
  end
  object Button1: TButton
    Left = 314
    Top = 536
    Width = 25
    Height = 25
    Caption = '1'
    TabOrder = 3
  end
  object Button2: TButton
    Left = 345
    Top = 536
    Width = 25
    Height = 25
    Caption = '2'
    TabOrder = 4
    OnClick = Button2Click
  end
  object Button3: TButton
    Left = 376
    Top = 536
    Width = 25
    Height = 25
    Caption = '3'
    TabOrder = 5
    OnClick = Button3Click
  end
  object RadioGroup1: TRadioGroup
    Left = 56
    Top = 40
    Width = 457
    Height = 113
    Caption = 'What type of energy source powers your home?'
    Items.Strings = (
      'Solar'
      'Wind'
      ' Natural Gas'
      'Coal')
    TabOrder = 6
  end
  object RadioGroup2: TRadioGroup
    Left = 58
    Top = 159
    Width = 455
    Height = 105
    Caption = 'How often do you use energy-efficient appliances?'
    Items.Strings = (
      'Always'
      'Frequently'
      'Occasionally'
      'Rarely/Never')
    TabOrder = 7
  end
  object RadioGroup3: TRadioGroup
    Left = 58
    Top = 289
    Width = 455
    Height = 105
    Caption = 'What is your primary heating source in the winter?'
    Items.Strings = (
      'Electric heating'
      'Natural Gas heating'
      'Wood burning'
      'Oil heating')
    TabOrder = 8
  end
  object RadioGroup4: TRadioGroup
    Left = 56
    Top = 400
    Width = 761
    Height = 105
    Caption = 
      'How well-insulated is your home, and what percentage of your hou' +
      'se surface is covered by shade or trees during the hottest part ' +
      'of the day?'
    Items.Strings = (
      'Well-insulated with extensive shade (more than 75% coverage)'
      'Well-insulated with moderate shade (50-75% coverage)'
      'Moderately insulated with limited shade (25-50% coverage)'
      
        'Poorly insulated with little to no shade (less than 25% coverage' +
        ')')
    TabOrder = 9
  end
end
